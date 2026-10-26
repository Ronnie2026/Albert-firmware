/* Firmware entry: 0x4ff2d13a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff2d13a(uint param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e140 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("clk_ctrl_os.c",0xba,"periph_rtc_mpll_freq_set","s_mpll_ref_cnt > 0");
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f38,0xffffffff);
  if (DAT_ram_4ff6e144 != param_1) {
    if (DAT_ram_4ff6e144 == 0) {
      uVar3 = 0;
      if ((_DAT_ram_5011003c & 0xffff) == _DAT_ram_5011003c >> 0x10) {
LAB_ram_4ff2d22c:
        uVar3 = 0;
        if (_DAT_ram_5011003c - 1 < 0xfffffffe) {
          uVar3 = _DAT_ram_5011003c & 0xfffe;
        }
      }
    }
    else {
      uVar4 = 0x103;
      if (1 < DAT_ram_4ff6e140) goto LAB_ram_4ff2d1e2;
      uVar3 = 0;
      if ((_DAT_ram_5011003c & 0xffff) == _DAT_ram_5011003c >> 0x10) goto LAB_ram_4ff2d22c;
    }
    FUN_ram_4ff32c80(uVar3,param_1 / 1000000,0);
    iVar1 = FUN_ram_4ff31f12(99,0,2,7,3);
    iVar2 = FUN_ram_4ff31f12(99,0,2,2,0);
    DAT_ram_4ff6e144 = (((iVar1 + 1) * uVar3) / (iVar2 + 1U)) * 1000000;
  }
  uVar4 = 0;
LAB_ram_4ff2d1e2:
  if (param_2 != (uint *)0x0) {
    *param_2 = DAT_ram_4ff6e144;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f38);
  return uVar4;
}


