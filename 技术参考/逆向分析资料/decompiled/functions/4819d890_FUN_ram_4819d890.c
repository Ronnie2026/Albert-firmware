/* Firmware entry: 0x4819d890 */

undefined4 FUN_ram_4819d890(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar3 = (byte *)*param_1;
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
    if (bVar1 == 0) {
      *param_1 = pbVar3;
      return 1;
    }
    uVar2 = (uint)*pbVar3;
    if ((uVar2 - 0x41 & 0xff) < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while (uVar2 == bVar1);
  return 0;
}


