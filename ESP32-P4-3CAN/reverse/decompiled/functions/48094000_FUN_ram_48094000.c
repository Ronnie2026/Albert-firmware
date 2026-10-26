/* Firmware entry: 0x48094000 */

void FUN_ram_48094000(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(undefined1 *)(param_2 + 0x2f);
  fence();
  if (*(char *)(param_1 + 0x18c6e) == '\0') {
    return;
  }
  fence();
  if (param_3 != *(int *)(param_1 + 0x18c70)) {
    return;
  }
  piVar3 = (int *)(param_1 + 0x18c74);
  *piVar3 = *piVar3 + 1;
  fence();
  if ((*(char *)(param_1 + 0x18c6e) == '\0') || (fence(), param_3 != *(int *)(param_1 + 0x18c70))) {
    *piVar3 = *piVar3 + -1;
    return;
  }
  cVar2 = *(char *)(param_2 + 0xd);
  if (*(char *)(param_1 + 0x2c) == cVar2) {
    iVar4 = 0;
  }
  else if (*(char *)(param_1 + 0x35a4) == cVar2) {
    iVar4 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != cVar2) goto LAB_ram_48094092;
    iVar4 = 2;
  }
  if (cVar2 == '\x01') {
    iVar5 = iVar4 * 0x3578 + 0x88c + param_1;
    FUN_ram_4ff3ec14(iVar5,0xffffffff);
    iVar6 = *(int *)(iVar4 * 0x3578 + param_1 + 0x580);
    FUN_ram_4ff3ee10(iVar5);
    if (iVar6 != 0) {
      if ((*(int *)(param_1 + 0x17160) == 0) ||
         (iVar6 = FUN_ram_4ff3afa2(*(int *)(param_1 + 0x17160),param_2,0,0), iVar6 != 1)) {
        FUN_ram_4ff3ec14(iVar5,0xffffffff);
        param_1 = iVar4 * 0x3578 + param_1;
        *(int *)(param_1 + 0x2efc) = *(int *)(param_1 + 0x2efc) + 1;
        FUN_ram_4ff3ee10(iVar5);
      }
      *piVar3 = *piVar3 + -1;
      return;
    }
  }
LAB_ram_48094092:
  if (*(code **)(param_1 + 0xc) == (code *)0x0) {
    if ((*(char *)(param_2 + 0x30) == '\0') && (*(code **)(param_1 + 8) != (code *)0x0)) {
      (**(code **)(param_1 + 8))(param_2,uVar1);
    }
  }
  else {
    (**(code **)(param_1 + 0xc))(param_2);
  }
  *piVar3 = *piVar3 + -1;
  return;
}


