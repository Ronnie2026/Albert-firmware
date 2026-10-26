/* Firmware entry: 0x4812357a */

undefined4 FUN_ram_4812357a(char *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x18) == iVar4) {
    if (param_2 != 0) goto LAB_ram_48123596;
  }
  else {
    if (param_2 == 0) {
      uVar7 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Update/src/Updater.cpp"
                              );
      uVar6 = *(undefined4 *)(param_1 + 0x18);
      uVar5 = *(undefined4 *)(param_1 + 0x2c);
      cVar1 = *param_1;
      uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): premature end: res:%u, pos:%u/%u\n\r\n",uVar3,uVar2,
                       0x2c7,"end",cVar1,uVar5,uVar6);
      FUN_ram_48122b98(param_1);
      *param_1 = '\f';
      return 0;
    }
LAB_ram_48123596:
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_ram_4812326e(param_1);
      iVar4 = *(int *)(param_1 + 0x2c);
    }
    *(int *)(param_1 + 0x18) = iVar4;
  }
  FUN_ram_4802a372(param_1 + 0x4c);
  if (param_1[0x47] < '\0') {
    if ((param_1[0x47] & 0x7fU) == 0) goto LAB_ram_481235b6;
  }
  else if ((*(int *)(param_1 + 0x38) == 0) || (*(int *)(param_1 + 0x40) == 0))
  goto LAB_ram_481235b6;
  FUN_ram_4802a48a(auStack_30,param_1 + 0x4c);
  iVar4 = FUN_ram_4802b13e(param_1 + 0x38,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  if (iVar4 == 0) {
    FUN_ram_48122b98(param_1);
    *param_1 = '\a';
    return 0;
  }
LAB_ram_481235b6:
  uVar2 = FUN_ram_481234f2(param_1);
  return uVar2;
}


