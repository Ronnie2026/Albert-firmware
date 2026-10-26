/* Firmware entry: 0x481744d6 */

undefined4 FUN_ram_481744d6(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_4) {
    pbVar3 = (byte *)*param_3;
    pbVar2 = pbVar3 + 1;
    *param_3 = pbVar2;
    uVar4 = (uint)*pbVar3;
    if ((uVar4 != 0) && (uVar4 <= param_4 - 1)) {
      *param_3 = pbVar2 + uVar4;
      uVar1 = FUN_ram_48174256();
      return uVar1;
    }
  }
  return 0xffffb080;
}


