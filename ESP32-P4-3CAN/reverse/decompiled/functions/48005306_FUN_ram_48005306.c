/* Firmware entry: 0x48005306 */

void FUN_ram_48005306(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_10 = param_5;
  uStack_c = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  if (param_1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("regdma_link.c",0x138,"regdma_link_init","config != NULL");
  }
  if (((*param_1 >> 0x10 & 0xf) < 4) && ((*param_1 >> 0x10 & 0xf) < 4)) {
    if (param_2 == 0) {
      (**(code **)((int)&PTR_FUN_ram_48004ac4_ram_481e4910 + (*param_1 >> 0xe & 0x3c)))();
      return;
    }
    uVar1 = *param_1 >> 0xe & 0x3c;
    pcVar2 = *(code **)((int)&PTR_FUN_ram_48004e78_ram_481e4920 + uVar1);
    (*pcVar2)(param_1,param_3,param_4,&uStack_10,uVar1,pcVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("regdma_link.c",0x130,"regdma_link_init_wrapper",
                   "(config->head.mode < ARRAY_SIZE(initfn)) && (config->head.mode < ARRAY_SIZE(initfn_b))"
                  );
}


