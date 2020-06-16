#include "inc/gpio/gpio_pin.hpp"

#include "pca10040.h"
#include "utils/MetaUtils.hpp"

namespace Gpio
{

class GpioPin::GpioBackendImpl
{
    public:

    GpioBackendImpl(
            std::uint8_t _pinNumber
        ,   Gpio::Direction _direction
    )
        :   m_pinDirection{ _direction }
        ,   m_pinNumber{ _pinNumber }
    {
         if( _direction ==  Direction::Output )
            nrf_gpio_cfg_output( m_pinNumber );
    }

    public:

    void set()
    {
        nrf_gpio_pin_set( m_pinNumber );
    }

    void reset()
    {
        nrf_gpio_pin_clear( m_pinNumber );
    }

    private:

    Gpio::Direction m_pinDirection;
    std::uint8_t m_pinNumber;
};

GpioPin::GpioPin(
            std::uint8_t _pinNumber
        ,   Gpio::Direction _gpioDirection
    )
    :   m_pGpioBackendImpl{
        std::make_unique<GpioBackendImpl>(
                _pinNumber
            ,   _gpioDirection
        )
    }
{
}

GpioPin::~GpioPin() = default;

void GpioPin::set()
{
    m_pGpioBackendImpl->set();
}

void GpioPin::reset()
{
    m_pGpioBackendImpl->reset();
}

GpioPin getGpioPin ( std::uint8_t _pinNumber, Direction _pinDirection )
{
    return GpioPin( _pinNumber,_pinDirection );
}

};
