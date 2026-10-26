/* Firmware entry: 0x48120fee */

void FUN_ram_48120fee(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_110;
  char cStack_10f;
  char cStack_10e;
  undefined4 uStack_b4;
  undefined4 uStack_a8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4ff2bac4();
  if ((iVar2 != 0) && (DAT_ram_4ff6e038 == '\0')) {
    memset(&local_110,0,0xf0);
    FUN_ram_48120b36(&local_110);
    FUN_ram_4ff2bbcc(1,uStack_b4,uStack_a8);
    DAT_ram_4ff6e038 = '\x01';
  }
  fence();
  if ((DAT_ram_4ff6e048 != 0) && (1999 < (uint)(param_1 - DAT_ram_4ff6e044))) {
    uVar4 = FUN_ram_4ff21a0a();
    uVar3 = __divdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
    FUN_ram_4ff2bbcc(3,0,uVar3);
  }
  fence();
  if (DAT_ram_4ff6e03c != (code *)0x0) {
    (*DAT_ram_4ff6e03c)(param_1);
  }
  iVar2 = DAT_ram_4ff6e050;
  fence();
  if (DAT_ram_4ff6e050 == 0) {
    return;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ee4,0xffffffff);
  iVar1 = DAT_ram_4ff6bfc0;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ee4);
  if ((char)param_2[2] == '\0') {
    *param_2 = iVar2;
    param_2[1] = iVar1;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else if ((iVar2 == *param_2) && (iVar1 - param_2[1] < 0)) {
    param_2[1] = iVar1;
  }
  iVar2 = DAT_ram_4ff6e04c;
  fence();
  if (((char)param_2[2] == '\0') || (*(char *)((int)param_2 + 10) != '\0')) {
    cStack_10e = '\0';
    cStack_10f = '\0';
    local_110 = false;
  }
  else {
    local_110 = *(char *)((int)param_2 + 9) == '\0';
    if ((bool)local_110) {
      *(undefined1 *)((int)param_2 + 9) = 1;
    }
    if (iVar2 == *param_2) {
      cStack_10f = '\0';
    }
    else {
      cStack_10f = '\x01';
      if ((uint)(param_1 - param_2[1]) < 2000) {
        cStack_10f = '\0';
        cStack_10e = '\0';
        goto LAB_ram_481210c0;
      }
    }
    cStack_10e = '\x01';
    *(undefined1 *)((int)param_2 + 10) = 1;
  }
LAB_ram_481210c0:
  if (((bool)local_110 != false) && (fence(), DAT_ram_4ff6e040 != 0)) {
    FUN_ram_4ff3e004(DAT_ram_4ff6e040,0,0,2,0);
  }
  if (cStack_10e == '\0') {
    return;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ee4,0xffffffff);
  DAT_ram_4ff6bfc8 = (uint)(cStack_10f != '\0');
  DAT_ram_4ff6bfc4 = (uint)(cStack_10f == '\0');
  FUN_ram_4ff2bb62();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ee4);
  FUN_ram_4ff2bcdc();
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff3805e();
}


