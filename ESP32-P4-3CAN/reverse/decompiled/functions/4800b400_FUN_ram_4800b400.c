/* Firmware entry: 0x4800b400 */

undefined4 FUN_ram_4800b400(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    iVar5 = param_1 * 4;
    piVar7 = (int *)(&DAT_ram_4ff5a014 + iVar5);
    if (*piVar7 != 0) {
      iVar1 = FUN_ram_4ff3c5d4();
      iVar2 = FUN_ram_4ff3b5f0(*(undefined4 *)(*piVar7 + 0x68),param_2);
      if (iVar2 == 0) {
        return 0x107;
      }
      iVar6 = param_1 * 0x38 + 0x4ff48230;
      FUN_ram_4ff3ec14(iVar6,0xffffffff);
      iVar2 = *(int *)(&DAT_ram_4ff48228 + param_1 * 0x38);
      uVar4 = *(uint *)(iVar2 + 0xc) & 0x4000;
      if (*(int *)(*piVar7 + 0xc) == 1) {
        if ((uVar4 == 0) && (*(int *)(iVar2 + 4) << 0x11 < 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("uart.c",0x5e0,"uart_wait_tx_done",
                           "!(is_rs485_mode && disabled && uart_hal_get_intraw_mask(&(uart_context[uart_num].hal)) & UART_INTR_TX_DONE)"
                          );
        }
      }
      else if (uVar4 == 0) {
        *(undefined4 *)(iVar2 + 0x10) = 0x4000;
      }
      FUN_ram_4ff3ee10(iVar6);
      FUN_ram_4ff3b5f0(*(undefined4 *)(*(int *)(&DAT_ram_4ff5a014 + iVar5) + 0x70),0);
      ets_delay_us(2);
      iVar2 = *(int *)(&DAT_ram_4ff48228 + param_1 * 0x38);
      uVar4 = *(uint *)(iVar2 + 0x1c) >> 0x10 & 0xff;
      if (iVar2 == 0x50121000) {
        uVar4 = (int)uVar4 >> 3;
      }
      if ((uVar4 == 0) && ((*(uint *)(iVar2 + 0x70) >> 4 & 0xf) == 0)) {
        FUN_ram_4ff3afa2(*(undefined4 *)(*(int *)(&DAT_ram_4ff5a014 + iVar5) + 0x68),0,0,0);
      }
      else {
        FUN_ram_4ff3ec14(iVar6,0xffffffff);
        *(uint *)(*(int *)(&DAT_ram_4ff48228 + param_1 * 0x38) + 0xc) =
             *(uint *)(*(int *)(&DAT_ram_4ff48228 + param_1 * 0x38) + 0xc) | 0x4000;
        FUN_ram_4ff3ee10(iVar6);
        iVar2 = FUN_ram_4ff3c5d4();
        iVar6 = 0;
        if ((uint)(iVar2 - iVar1) <= param_2) {
          iVar6 = (iVar1 + param_2) - iVar2;
        }
        iVar1 = FUN_ram_4ff3b5f0(*(undefined4 *)(*(int *)(&DAT_ram_4ff5a014 + iVar5) + 0x70),iVar6);
        FUN_ram_4ff3afa2(*(undefined4 *)(*(int *)(&DAT_ram_4ff5a014 + iVar5) + 0x68),0,0,0);
        if (iVar1 == 0) {
          return 0x107;
        }
      }
      return 0;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart driver error\n",uVar3,
                     &DAT_ram_481b4c88,"uart_wait_tx_done",0x5d0);
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar3,
                     &DAT_ram_481b4c88,"uart_wait_tx_done",0x5cf);
  }
  return 0xffffffff;
}


