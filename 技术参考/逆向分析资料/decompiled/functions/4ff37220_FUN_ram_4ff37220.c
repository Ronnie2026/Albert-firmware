/* Firmware entry: 0x4ff37220 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff37220(void)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_128;
  undefined1 auStack_124 [216];
  undefined4 uStack_4c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_5008c380 = 0x3ff;
  iVar1 = (_DAT_ram_5008c37c & 0x7ff) << 0x10;
  memset(&iStack_128,0,0x108);
  iStack_128 = iVar1;
  iVar1 = FUN_ram_4ff36ef4(iVar1,auStack_124,0x18);
  if (iVar1 == 0) {
    uStack_4c = 0x18;
    iVar1 = FUN_ram_4ff37026(&iStack_128);
    if (iVar1 == 0) {
      _DAT_ram_5008c380 = 0x3ff;
      _DAT_ram_5008c37c = 0;
      uVar2 = 0;
    }
    else if (DAT_ram_4ff47dac == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s__failed_to_process_se_ram_4ff54078,uVar2,s_image_process_ram_4ff53e98)
      ;
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  if (DAT_ram_4ff47dac != 0) {
    uVar2 = FUN_ram_4ff44d14();
    ets_printf(s_E___lu___s___s__d___failed_to_re_ram_4ff54020,uVar2,s_image_process_ram_4ff53e98,
               s_process_image_header_ram_4ff58188,0x7e);
    if (DAT_ram_4ff47dac != 0) {
      uVar2 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s__failed_to_process_im_ram_4ff5404c,uVar2,s_image_process_ram_4ff53e98)
      ;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


