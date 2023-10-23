# nexir's layout

```bash
qmk compile -kb lily58/rev1 -km nexir
```

```bash
avrdude -p atmega32u4 -c avr109 -P /dev/tty4 -U flash:w:lily58_rev1_nexir.hex:i
```