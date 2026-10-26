/* Firmware entry: 0x4817f2d4 */

undefined4 FUN_ram_4817f2d4(undefined4 *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar4 = (byte *)*param_1;
  if (0 < param_2 - (int)pbVar4) {
    if ((char)*pbVar4 < '\0') {
      uVar6 = *pbVar4 & 0x7f;
      if (3 < (uVar6 - 1 & 0xff)) {
        return 0xffffff9c;
      }
      if (param_2 - (int)pbVar4 <= (int)uVar6) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0xffffffa0;
      }
      pbVar2 = pbVar4 + 1;
      *param_3 = 0;
      *param_1 = pbVar2;
      uVar5 = 0;
      pbVar3 = pbVar2;
      do {
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        uVar5 = uVar5 << 8 | (uint)bVar1;
        *param_3 = uVar5;
        *param_1 = pbVar3;
      } while (pbVar3 != pbVar4 + uVar6 + 1);
      pbVar2 = pbVar2 + uVar6;
    }
    else {
      pbVar2 = pbVar4 + 1;
      *param_1 = pbVar2;
      uVar5 = (uint)*pbVar4;
      *param_3 = uVar5;
    }
    if (uVar5 <= (uint)(param_2 - (int)pbVar2)) {
      return 0;
    }
  }
  return 0xffffffa0;
}


