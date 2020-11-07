# guitar_port_driver

### template
https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs


Inspired by https://sourceforge.net/projects/line6linux/



```
sudo insmod build/guitarport_usb.ko
sudo rmmod guitarport_usb
dmesg | tail
```

This is a poc for a usb driver for the GuitarPort. It will not at this time address any other functionality of the line6linux driver.
