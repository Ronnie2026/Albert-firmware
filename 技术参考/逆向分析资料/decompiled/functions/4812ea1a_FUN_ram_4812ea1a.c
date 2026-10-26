/* Firmware entry: 0x4812ea1a */

bool FUN_ram_4812ea1a(int *param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == -1) {
    return false;
  }
  if (1 < param_1[6] - 3U) {
    iVar1 = param_1[7];
    iVar2 = crc32_le(0xffffffff,param_1,4);
    return iVar1 == iVar2;
  }
  return false;
}


