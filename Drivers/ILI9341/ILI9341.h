#ifndef _ILI9341_H
#define _ILI9341_H

#include <DisplayCore.h>
#include <DSPI.h>

class ILI9341 : public DisplayCore {
    protected:

        static const uint8_t ILI9341_SOFTRESET        = 0x01;
        static const uint8_t ILI9341_SLEEPIN          = 0x10;
        static const uint8_t ILI9341_SLEEPOUT         = 0x11;
        static const uint8_t ILI9341_NORMALDISP       = 0x13;
        static const uint8_t ILI9341_INVERTOFF        = 0x20;
        static const uint8_t ILI9341_INVERTON         = 0x21;
        static const uint8_t ILI9341_GAMMASET         = 0x26;
        static const uint8_t ILI9341_DISPLAYOFF       = 0x28;
        static const uint8_t ILI9341_DISPLAYON        = 0x29;
        static const uint8_t ILI9341_COLADDRSET       = 0x2A;
        static const uint8_t ILI9341_PAGEADDRSET      = 0x2B;
        static const uint8_t ILI9341_MEMORYWRITE      = 0x2C;
        static const uint8_t ILI9341_PIXELFORMAT      = 0x3A;
        static const uint8_t ILI9341_FRAMECONTROL     = 0xB1;
        static const uint8_t ILI9341_DISPLAYFUNC      = 0xB6;
        static const uint8_t ILI9341_ENTRYMODE        = 0xB7;
        static const uint8_t ILI9341_POWERCONTROL1    = 0xC0;
        static const uint8_t ILI9341_POWERCONTROL2    = 0xC1;
        static const uint8_t ILI9341_VCOMCONTROL1     = 0xC5;
        static const uint8_t ILI9341_VCOMCONTROL2     = 0xC7;
        static const uint8_t ILI9341_MEMCONTROL       = 0x36;
        static const uint8_t ILI9341_MADCTL           = 0x36;

        static const uint8_t ILI9341_MADCTL_MY        = 0x80;
        static const uint8_t ILI9341_MADCTL_MX        = 0x40;
        static const uint8_t ILI9341_MADCTL_MV        = 0x20;
        static const uint8_t ILI9341_MADCTL_ML        = 0x10;
        static const uint8_t ILI9341_MADCTL_RGB       = 0x00;
        static const uint8_t ILI9341_MADCTL_BGR       = 0x08;
        static const uint8_t ILI9341_MADCTL_MH        = 0x04;

        p32_ioport *_d0_port;
        p32_ioport *_d1_port;
        p32_ioport *_d2_port;
        p32_ioport *_d3_port;
        p32_ioport *_d4_port;
        p32_ioport *_d5_port;
        p32_ioport *_d6_port;
        p32_ioport *_d7_port;

        p32_ioport *_cs_port;
        p32_ioport *_wr_port;
        p32_ioport *_rd_port;
        p32_ioport *_rs_port;

        uint32_t _d0_mask;
        uint32_t _d1_mask;
        uint32_t _d2_mask;
        uint32_t _d3_mask;
        uint32_t _d4_mask;
        uint32_t _d5_mask;
        uint32_t _d6_mask;
        uint32_t _d7_mask;

        uint32_t _cs_mask;
        uint32_t _wr_mask;
        uint32_t _rd_mask;
        uint32_t _rs_mask;

        uint8_t _rs_pin;
        uint8_t _wr_pin;
        uint8_t _rd_pin;
        uint8_t _cs_pin;
        uint8_t _reset_pin;
        uint8_t _d0_pin;
        uint8_t _d1_pin;
        uint8_t _d2_pin;
        uint8_t _d3_pin;
        uint8_t _d4_pin;
        uint8_t _d5_pin;
        uint8_t _d6_pin;
        uint8_t _d7_pin;

        ILI9341() {}

	public:
        static const int Width      = 240;
        static const int Height     = 320;

		ILI9341(uint8_t rs, uint8_t wr, uint8_t rd, uint8_t cs, uint8_t reset,
                uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
                uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7) : 
            _rs_pin(rs), _wr_pin(wr), _rd_pin(rd), _cs_pin(cs), _reset_pin(reset),
            _d0_pin(d0), _d1_pin(d1), _d2_pin(d2), _d3_pin(d3),
            _d4_pin(d4), _d5_pin(d5), _d6_pin(d6), _d7_pin(d7) {}
        
		void setAddrWindow(int x0, int y0, int x1, int y1);
        void fillScreen(color_t color);
        void setPixel(int x, int y, color_t color);
        void drawVerticalLine(int x, int y, int h, color_t color);
        void drawHorizontalLine(int x, int y, int w, color_t color);
        void fillRectangle(int x, int y, int w, int h, color_t color);
        void setRotation(int r);
        void invertDisplay(boolean i);
        void displayOn() {} // Not implemented
        void displayOff() {} // Not implemented
        void openWindow(int, int, int, int);
        void windowData(color_t);
        void windowData(color_t *, int);
        void closeWindow();

        void setBacklight(int b);

        virtual void initializeDevice();

        virtual void data(uint8_t);
        virtual void command(uint8_t);
        void initChip();

};

class ILI9341_DSPI : public ILI9341 {
    private:
        DSPI *_spi;
        p32_ioport *_cs_port;
        p32_ioport *_rs_port;
        uint32_t _cs_mask;
        uint32_t _rs_mask;
        uint8_t _cs_pin;
        uint8_t _rs_pin;

    public:
        ILI9341_DSPI(DSPI *spi, uint8_t cs, uint8_t rs) : _spi(spi), _cs_pin(cs), _rs_pin(rs) {}
        ILI9341_DSPI(DSPI &spi, uint8_t cs, uint8_t rs) : _spi(&spi), _cs_pin(cs), _rs_pin(rs) {}

        void initializeDevice();
        void command(uint8_t c);
        void data(uint8_t d);

};

#endif
