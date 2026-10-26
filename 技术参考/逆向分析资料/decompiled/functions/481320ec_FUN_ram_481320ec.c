/* Firmware entry: 0x481320ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481320ec(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_5011301c = _DAT_ram_5011301c & 0xfffffffd;
  _DAT_ram_50113004 = _DAT_ram_50113004 & 0x7fffffff;
  _DAT_ram_50113000 =
       _DAT_ram_50113000 & 0x6ffc003f | 0x200 | (param_1[3] & 1) << 6 | (param_1[4] & 1) << 7 |
       0xffc0000 | (uint)param_1[2] << 0x1f | 0x40000000;
  bVar2 = *param_1;
  uVar1 = FUN_ram_4ff20626();
  bVar2 = bVar2 & -(99 < uVar1);
  FUN_ram_4ff31fb8(0x6a,0,9,4,2,bVar2);
  FUN_ram_4ff31fb8(0x6a,0,9,7,5,bVar2);
  _DAT_ram_50113000 = _DAT_ram_50113000 & 0xdfffffff | (param_1[1] & 1) << 0x1d;
  return;
}


