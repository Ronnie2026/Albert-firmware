/* Firmware entry: 0x4813d812 */

undefined4 FUN_ram_4813d812(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  iVar2 = *(int *)(param_1 + 0xc4);
  bVar1 = *(byte *)(iVar2 + 0xd);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(code **)(param_1 + 0xd0) == (code *)0x0) {
    FUN_ram_4813c64a(param_1,*(undefined2 *)(iVar2 + 8));
    FUN_ram_4813ac74(iVar2);
  }
  else {
    iVar3 = (**(code **)(param_1 + 0xd0))(*(undefined4 *)(param_1 + 0x38),param_1,iVar2,0);
    if (iVar3 != 0) {
      if (iVar3 == -0xd) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0xfffffff3;
      }
      *(int *)(param_1 + 0xc4) = iVar2;
      return 0xfffffffb;
    }
  }
  if ((bVar1 & 0x20) != 0) {
    if (*(short *)(param_1 + 0x54) != -2) {
      *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 1;
    }
    if ((*(code **)(param_1 + 0xd0) != (code *)0x0) &&
       (iVar2 = (**(code **)(param_1 + 0xd0))(*(undefined4 *)(param_1 + 0x38),param_1,0,0),
       iVar2 == -0xd)) {
      return 0xfffffff3;
    }
  }
  return 0;
}


