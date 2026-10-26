/* Firmware entry: 0x4ff3c01a */

void FUN_ram_4ff3c01a(undefined4 param_1,char *param_2,size_t param_3,undefined4 param_4,
                     uint param_5,undefined4 *param_6,undefined4 *param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset((void *)param_7[0xc],0xa5,param_3);
  uVar5 = param_7[0xc] + (param_3 - 1) & 0xfffffff0;
  param_7[0x12] = uVar5;
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2 + 0x10;
    pcVar4 = (char *)(param_7 + 0xd);
    do {
      cVar1 = *param_2;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      param_2 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (param_2 != pcVar3);
    *(undefined1 *)((int)param_7 + 0x43) = 0;
  }
  if (param_5 < 0x19) {
    param_7[0xb] = param_5;
    param_7[0x11] = param_8;
    param_7[0x15] = param_5;
    FUN_ram_4ff3faf2(param_7 + 1);
    FUN_ram_4ff3faf2(param_7 + 6);
    param_7[6] = 0x19 - param_5;
    param_7[4] = param_7;
    param_7[9] = param_7;
    FUN_ram_4800639a(param_7 + 0x1a);
    uVar2 = FUN_ram_4ff3ea98(uVar5,param_1,param_4);
    *param_7 = uVar2;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = param_7;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("tasks.c",0x457,"prvInitialiseNewTask","uxPriority < ( 25 )");
}


