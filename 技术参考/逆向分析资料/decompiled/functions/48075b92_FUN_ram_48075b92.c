/* Firmware entry: 0x48075b92 */

bool FUN_ram_48075b92(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte *pbVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar3 = 0;
  pbVar4 = param_1;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    bVar3 = bVar3 | bVar1;
  } while (pbVar4 != param_1 + 0x10);
  bVar2 = false;
  if (bVar3 != 0) {
    bVar2 = *(int *)(param_1 + 0x10) != 0;
  }
  return bVar2;
}


