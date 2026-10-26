/* Firmware entry: 0x4816bb3a */

int FUN_ram_4816bb3a(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 != 0) && (*(ushort *)(param_2 + 0xc) <= param_4)) {
    return -(uint)(*(ushort *)(param_2 + 0xe) < param_3);
  }
  return -1;
}


