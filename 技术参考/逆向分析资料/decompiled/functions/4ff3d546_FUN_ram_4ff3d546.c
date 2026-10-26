/* Firmware entry: 0x4ff3d546 */

undefined4 FUN_ram_4ff3d546(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0x1046,"xTaskCheckForTimeOut","pxTimeOut");
  }
  if (param_2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0x1047,"xTaskCheckForTimeOut","pxTicksToWait");
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  uVar2 = DAT_ram_4ff6da28;
  iVar1 = DAT_ram_4ff6da10;
  if (*(char *)((&DAT_ram_4ff6da3c)[mhartid] + 0x15e) == '\0') {
    uVar5 = *param_2;
    if (uVar5 != 0xffffffff) {
      uVar4 = param_1[1];
      if (((*param_1 != DAT_ram_4ff6da10) && (uVar4 <= DAT_ram_4ff6da28)) ||
         (uVar5 <= DAT_ram_4ff6da28 - uVar4)) {
        *param_2 = 0;
        goto LAB_ram_4ff3d5c4;
      }
      *param_2 = (uVar5 - DAT_ram_4ff6da28) + uVar4;
      *param_1 = iVar1;
      param_1[1] = uVar2;
    }
    uVar3 = 0;
  }
  else {
    *(undefined1 *)((&DAT_ram_4ff6da3c)[mhartid] + 0x15e) = 0;
LAB_ram_4ff3d5c4:
    uVar3 = 1;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return uVar3;
}


