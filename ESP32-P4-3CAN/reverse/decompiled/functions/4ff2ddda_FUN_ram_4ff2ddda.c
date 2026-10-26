/* Firmware entry: 0x4ff2ddda */

undefined4 FUN_ram_4ff2ddda(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (*(char *)(param_1 + 0x85) == '\0') {
    if (DAT_ram_4ff47dac == 0) {
      uVar2 = 0x103;
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___rx_can_only_c_ram_4ff57554,uVar2,s_esp_twai_ram_4ff57310,
                 s__node_parse_rx_ram_4ff53730,0x2a9);
      uVar2 = 0x103;
    }
  }
  else {
    iVar1 = FUN_ram_4ff3eb8c();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s____build_p164_v32_esp_idf_esp_dr_ram_4ff575d0 + 0x2a,0x2aa,
                       s__node_parse_rx_ram_4ff53720,s_xPortInIsrContext_______should_a_ram_4ff57594
                      );
    }
    FUN_ram_4ff42e90(*(undefined4 *)(param_1 + 0x40),param_1 + 0x8c,param_2,
                     *(undefined4 *)(param_2 + 0x18),*(undefined1 *)(param_2 + 0x1c));
    if ((*(int *)(param_1 + 0x5c) != 0) &&
       (uVar5 = *(undefined8 *)(param_2 + 0x10),
       *(int *)(param_2 + 0x10) == 0 && *(int *)(param_2 + 0x14) == 0)) {
      uVar4 = FUN_ram_4ff21a0a();
      iVar1 = (int)(uVar4 >> 0x20);
      uVar3 = *(uint *)(param_1 + 0x5c);
      if (uVar3 < 0xf4241) {
        if (uVar3 != 0) {
          uVar5 = __udivdi3((int)uVar4,iVar1,1000000 / uVar3,0);
        }
      }
      else {
        uVar3 = uVar3 / 1000000;
        uVar5 = CONCAT44((int)((ulonglong)uVar3 * (uVar4 & 0xffffffff) >> 0x20) + uVar3 * iVar1,
                         uVar3 * (int)uVar4);
      }
      *(undefined8 *)(param_2 + 0x10) = uVar5;
    }
    uVar2 = 0;
  }
  return uVar2;
}


