/* Firmware entry: 0x4817ffcc */

undefined4 FUN_ram_4817ffcc(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_3) {
    return 0xfffffffc;
  }
  if ((uint)*(ushort *)((int)param_1 + 6) << 5 <= param_2) {
    if (param_3 == 0) {
      return 0;
    }
    iVar1 = FUN_ram_4817fbba(param_1,(param_2 >> 5) + 1);
    if (iVar1 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xfffffff0;
    }
  }
  puVar2 = (uint *)(*param_1 + (param_2 >> 5) * 4);
  *puVar2 = ~(1 << (param_2 & 0x1f)) & *puVar2 | param_3 << (param_2 & 0x1f);
  return 0;
}


