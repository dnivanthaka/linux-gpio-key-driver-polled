#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/input.h>
#include <linux/input-polldev.h>
#include <linux/platform_device.h>
#include <linux.gpio.h>
#include <linux/gpio/consumer.h>
#include <linux/gpio_keys.h>

#define GPIO_DRV_NAME "gpiokeys"
#define GPIO_INPUT    "gpio7"

static int gpiokeys_polled_probe(struct platform_device *pdev){
    struct device *dev = &pdev->dev;
    struct gpio_keys_platform_data *pdata = dev_get_platdata(dev);
    struct input_dev *input;
    struct input_polled_dev *poll_dev;

    int error;

}


static struct platform_driver gpiokeys_polled_driver = {
    .probe = gpiokeys_polled_probe,
    .driver = {
        .name = GPIO_DRV_NAME
    },
};

module_platform_driver(gpiokeys_polled_driver);

MODULE_DESCRIPTION("Polled GPIO Buttons Driver for Raspberry Pi");
MODULE_AUTHOR("D.N. Amerasinghe <nivanthaka@gmail.com>");
MODULE_LICENSE("GPL");
