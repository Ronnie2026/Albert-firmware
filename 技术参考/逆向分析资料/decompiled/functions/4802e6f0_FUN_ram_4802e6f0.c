/* Firmware entry: 0x4802e6f0 */

void FUN_ram_4802e6f0(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar2 = (byte *)(param_1 + 0x500);
  bVar3 = 0;
  pbVar4 = pbVar2;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    bVar3 = bVar3 | bVar1;
  } while (pbVar4 != (byte *)(param_1 + 0x50c));
  if (param_2 == 0) goto LAB_ram_4802e72e;
  do {
    FUN_ram_48132f46(pbVar2,0xc);
    bVar3 = 0;
    pbVar4 = pbVar2;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      bVar3 = bVar3 | bVar1;
    } while (pbVar4 != (byte *)(param_1 + 0x50c));
LAB_ram_4802e72e:
  } while (bVar3 == 0);
  return;
}


