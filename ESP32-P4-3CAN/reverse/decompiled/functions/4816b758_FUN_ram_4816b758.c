/* Firmware entry: 0x4816b758 */

void FUN_ram_4816b758(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)param_1[0x10];
  if (param_1[2] == 1) {
    param_1[3] = 0;
    param_1[2] = 2;
  }
  iVar2 = param_1[0xe];
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x68);
    *(undefined4 *)(param_1[0xf] + 0x88) = *(undefined4 *)(iVar2 + 0x88);
    if (iVar3 != 0) {
      FUN_ram_48189290();
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar2 + 0x68));
      *(undefined4 *)(iVar2 + 0x68) = 0;
    }
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar2 + 0x70));
    FUN_ram_48178af2(iVar2,0x90);
    iVar3 = param_1[0xe];
    *(undefined4 *)(iVar2 + 0x6c) = 0xffffffff;
    thunk_FUN_ram_4ff209c6(iVar3);
  }
  iVar2 = param_1[0xf];
  param_1[0xf] = 0;
  pcVar4 = *(code **)(*param_1 + 0x2c);
  param_1[0xe] = iVar2;
  if (((pcVar4 != (code *)0x0) && (*(int *)(iVar2 + 0x14) != 0)) && (cVar1 == '\0')) {
    (*pcVar4)(*(undefined4 *)(*param_1 + 0x30),iVar2 + 0x18);
  }
  FUN_ram_4816a834(param_1);
  thunk_FUN_ram_4ff209c6(param_1[0x10]);
  param_1[0x10] = 0;
  if (param_1[0x13] != 0) {
    FUN_ram_48171410();
    thunk_FUN_ram_4ff209c6(param_1[0x13]);
  }
  iVar2 = param_1[0x14];
  param_1[0x14] = 0;
  param_1[0x13] = iVar2;
  param_1[1] = 0x1b;
  return;
}


