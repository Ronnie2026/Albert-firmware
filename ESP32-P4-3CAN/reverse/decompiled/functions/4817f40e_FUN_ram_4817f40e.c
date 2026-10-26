/* Firmware entry: 0x4817f40e */

undefined4 FUN_ram_4817f40e(undefined4 *param_1,int param_2,uint *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar5 = (byte *)*param_1;
  if (0 < param_2 - (int)pbVar5) {
    if (*pbVar5 != param_4) {
      return 0xffffff9e;
    }
    *param_1 = pbVar5 + 1;
    iVar2 = param_2 - (int)(pbVar5 + 1);
    if (0 < iVar2) {
      if ((char)pbVar5[1] < '\0') {
        uVar7 = pbVar5[1] & 0x7f;
        if (3 < (uVar7 - 1 & 0xff)) {
          return 0xffffff9c;
        }
        if (iVar2 <= (int)uVar7) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0xffffffa0;
        }
        pbVar3 = pbVar5 + 2;
        *param_3 = 0;
        *param_1 = pbVar3;
        uVar6 = 0;
        pbVar4 = pbVar3;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          uVar6 = uVar6 << 8 | (uint)bVar1;
          *param_3 = uVar6;
          *param_1 = pbVar4;
        } while (pbVar4 != pbVar5 + uVar7 + 2);
        pbVar3 = pbVar3 + uVar7;
      }
      else {
        pbVar3 = pbVar5 + 2;
        *param_1 = pbVar3;
        uVar6 = (uint)pbVar5[1];
        *param_3 = uVar6;
      }
      if (uVar6 <= (uint)(param_2 - (int)pbVar3)) {
        return 0;
      }
    }
  }
  return 0xffffffa0;
}


