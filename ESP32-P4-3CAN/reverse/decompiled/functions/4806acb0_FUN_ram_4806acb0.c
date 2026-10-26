/* Firmware entry: 0x4806acb0 */

void FUN_ram_4806acb0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_34;
  int *piStack_30;
  uint auStack_2c [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_4 + 0xf) < '\0') {
    auStack_2c[0] = *(byte *)((int)param_4 + 0xf) & 0x7f;
  }
  else {
    piVar5 = (int *)*param_4;
    if (piVar5 == (int *)0x0) {
      auStack_2c[0] = 0;
      param_4 = piVar5;
    }
    else {
      auStack_2c[0] = param_4[2];
      param_4 = piVar5;
    }
  }
  iVar2 = *(int *)(param_1 + 0x40);
  iVar7 = *(int *)(param_1 + 0x4c);
  cVar1 = *(char *)(iVar2 * 0x1d40 + iVar7 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    uStack_34 = param_2;
    piStack_30 = param_4;
    if ((*(code **)(param_1 + 0x28) != (code *)0x0) && (*(char *)(param_1 + 0x2c) == '\0')) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
      (**(code **)(param_1 + 0x28))(&uStack_34,&piStack_30,auStack_2c);
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    uVar3 = auStack_2c[0];
    if (auStack_2c[0] == 0) {
      uVar3 = 1;
    }
    iVar4 = FUN_ram_4ff206d8(uVar3,0x404);
    iVar2 = iVar2 * 0x1d40;
    iVar6 = iVar7 + iVar2;
    *(int *)(iVar6 + 0x1cdc) = iVar4;
    if (iVar4 == 0) {
      if (*(char *)(iVar6 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar7 + iVar2 + 0x1c,7);
      }
    }
    else {
      if (auStack_2c[0] != 0) {
        FUN_ram_4ff45158(iVar4,piStack_30,auStack_2c[0]);
        iVar4 = *(int *)(iVar6 + 0x1cdc);
      }
      iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40) * 0x1d40;
      if ((*(char *)(iVar2 + 0x44c) != '\0') && (*(char *)(iVar2 + 0x44c) != '\x06')) {
        *(int *)(iVar2 + 0x1ce0) = iVar4;
        *(uint *)(iVar2 + 0x1ce4) = auStack_2c[0];
        *(undefined4 *)(iVar2 + 0x1ce8) = 0;
        FUN_ram_48066484(param_1,uStack_34,param_3,iVar2,&LAB_ram_4802d3f2);
        return;
      }
    }
  }
  return;
}


