/* Firmware entry: 0x4818014a */

undefined4 FUN_ram_4818014a(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48181584(*param_1,*(undefined2 *)((int)param_1 + 6));
  uVar3 = (uint)*(ushort *)((int)param_1 + 6);
  uVar2 = iVar1 + param_2;
  if (uVar3 << 5 < uVar2) {
    iVar1 = FUN_ram_4817fbba(param_1,(uint)((uVar2 & 0x1f) != 0) + (uVar2 >> 5));
    if (iVar1 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xfffffff0;
    }
    uVar3 = (uint)*(ushort *)((int)param_1 + 6);
  }
  FUN_ram_48181a22(*param_1,uVar3,param_2);
  return 0;
}


