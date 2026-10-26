/* Firmware entry: 0x48133bf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_48133bf4(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_28 = 0;
  iVar6 = *(int *)*param_1;
  iVar5 = param_1[1];
  if (param_2 == 0x11) {
    FUN_ram_48132e46();
    param_1[0x12] = 0x11;
    iVar1 = FUN_ram_481a4bb6(0x11,0,&uStack_28);
    if (iVar1 != 0) goto LAB_ram_48133dbe;
    FUN_ram_4ff3122a();
    iVar1 = 1;
  }
  else {
    param_1[0x12] = param_2;
    iVar1 = FUN_ram_481a4bb6(param_2,0,&uStack_28);
    if (iVar1 != 0) {
LAB_ram_48133dbe:
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): get clock source frequency failed\n",uVar2,
                       "gptimer","gptimer_select_periph_clock",0x69);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1;
    }
    FUN_ram_4ff3122a();
    if (param_2 == 0x12) {
      iVar1 = 0;
    }
    else {
      iVar1 = 2;
      if (param_2 != 9) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/timer_ll.h",0x96,
                         "timer_ll_set_clock_source","false");
      }
    }
  }
  if (iVar6 == 0) {
    if (iVar5 == 0) {
      _DAT_ram_500e6094 = iVar1 << 0x16 | _DAT_ram_500e6094 & 0xff3fffff | 0x1000000;
    }
    else {
      _DAT_ram_500e6094 = iVar1 << 0x19 | _DAT_ram_500e6094 & 0xf9ffffff | 0x8000000;
    }
  }
  else if (iVar5 == 0) {
    _DAT_ram_500e6098 = iVar1 << 0x14 | _DAT_ram_500e6098 & 0xffcfffff | 0x400000;
  }
  else {
    _DAT_ram_500e6098 = iVar1 << 0x17 | _DAT_ram_500e6098 & 0xfe7fffff | 0x2000000;
  }
  FUN_ram_4ff31240();
  uVar4 = uStack_28 / param_3;
  if (uVar4 - 2 < 0xffff) {
    puVar3 = (uint *)(param_1[9] + iVar5 * 0x24);
    uStack_24 = (uVar4 & 0xffff) << 0xd | *puVar3 & 0xe0001fff;
    *puVar3 = uStack_24;
    *puVar3 = *puVar3 | 0x1000;
    param_1[2] = uStack_28 / uVar4;
    if (uStack_28 / uVar4 != param_3) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"gptimer","W (%lu) %s: resolution lost, expect %lu, real %lu\n",uVar2,
                       "gptimer",param_3,param_1[2]);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/timer_ll.h",0xdf,
                   "timer_ll_set_clock_prescale","divider >= 2 && divider <= 65536");
}


