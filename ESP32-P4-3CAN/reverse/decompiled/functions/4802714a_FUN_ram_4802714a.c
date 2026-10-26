/* Firmware entry: 0x4802714a */

/* WARNING: Removing unreachable block (ram,0x4802727c) */
/* WARNING: Removing unreachable block (ram,0x48027280) */
/* WARNING: Removing unreachable block (ram,0x480271ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4802714a(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar3 = *param_1;
  if (iVar3 != 0) {
    while (iVar3 = FUN_ram_4ff3b5f0(iVar3,0xffffffff), iVar3 != 1) {
      iVar3 = *param_1;
    }
  }
  bVar1 = *(byte *)(param_1 + 1);
  while (bVar1 == 0) {
    puVar4 = &DAT_ram_500ca000;
    if ((_DAT_ram_500ca01c >> 0x10 & 0xff) == 0) {
LAB_ram_480271aa:
      if ((*(uint *)(puVar4 + 0x70) >> 4 & 0xf) == 0) {
LAB_ram_480271b2:
        if ((param_2 == 0) && (iVar3 = FUN_ram_4800bb96(), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff36e1a(iVar3,
                           "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                           ,0x457,"uartFlushTxOnly","uart_flush_input(uart->num)");
        }
        if (*param_1 != 0) {
          FUN_ram_4ff3afa2(*param_1,0,0,0);
          return;
        }
        return;
      }
    }
  }
LAB_ram_48027218:
  do {
    if (bVar1 != 3) {
      if (bVar1 < 4) {
        if (bVar1 != 1) {
          puVar4 = &DAT_ram_500cc000;
          if ((_DAT_ram_500cc01c >> 0x10 & 0xff) == 0) goto LAB_ram_480271aa;
          goto LAB_ram_48027218;
        }
        do {
          uVar2 = _DAT_ram_500cb070;
        } while ((_DAT_ram_500cb01c >> 0x10 & 0xff) != 0);
      }
      else {
        if (bVar1 != 4) {
          if ((_DAT_ram_5012101c >> 0x13 & 0x1f) == 0) {
            puVar4 = (undefined1 *)0x50121000;
            goto LAB_ram_480271aa;
          }
          goto LAB_ram_48027218;
        }
        do {
          uVar2 = _DAT_ram_500ce070;
        } while ((_DAT_ram_500ce01c >> 0x10 & 0xff) != 0);
      }
      if ((uVar2 >> 4 & 0xf) == 0) goto LAB_ram_480271b2;
      goto LAB_ram_48027218;
    }
  } while ((_DAT_ram_500cd01c >> 0x10 & 0xff) != 0);
  puVar4 = &DAT_ram_500cd000;
  goto LAB_ram_480271aa;
}


