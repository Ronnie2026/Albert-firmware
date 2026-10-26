/* Firmware entry: 0x48067954 */

void FUN_ram_48067954(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_34;
  char *pcStack_30;
  size_t asStack_2c [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  asStack_2c[0] = 0;
  if (param_4 != (char *)0x0) {
    asStack_2c[0] = strlen(param_4);
  }
  iVar5 = *(int *)(param_1 + 0x40);
  iVar6 = *(int *)(param_1 + 0x4c);
  cVar1 = *(char *)(iVar5 * 0x1d40 + iVar6 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    uStack_34 = param_2;
    pcStack_30 = param_4;
    if ((*(code **)(param_1 + 0x28) != (code *)0x0) && (*(char *)(param_1 + 0x2c) == '\0')) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
      (**(code **)(param_1 + 0x28))(&uStack_34,&pcStack_30,asStack_2c);
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    sVar2 = asStack_2c[0];
    if (asStack_2c[0] == 0) {
      sVar2 = 1;
    }
    iVar3 = FUN_ram_4ff206d8(sVar2,0x404);
    iVar5 = iVar5 * 0x1d40;
    iVar4 = iVar6 + iVar5;
    *(int *)(iVar4 + 0x1cdc) = iVar3;
    if (iVar3 == 0) {
      if (*(char *)(iVar4 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar6 + iVar5 + 0x1c,7);
      }
    }
    else {
      if (asStack_2c[0] != 0) {
        FUN_ram_4ff45158(iVar3,pcStack_30,asStack_2c[0]);
        iVar3 = *(int *)(iVar4 + 0x1cdc);
      }
      iVar5 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40) * 0x1d40;
      if ((*(char *)(iVar5 + 0x44c) != '\0') && (*(char *)(iVar5 + 0x44c) != '\x06')) {
        *(int *)(iVar5 + 0x1ce0) = iVar3;
        *(size_t *)(iVar5 + 0x1ce4) = asStack_2c[0];
        *(undefined4 *)(iVar5 + 0x1ce8) = 0;
        FUN_ram_48066484(param_1,uStack_34,param_3,iVar5,&LAB_ram_4802d3f2);
      }
    }
  }
  return;
}


