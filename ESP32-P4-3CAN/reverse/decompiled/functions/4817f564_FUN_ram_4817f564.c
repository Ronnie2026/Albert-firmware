/* Firmware entry: 0x4817f564 */

undefined4 FUN_ram_4817f564(int *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar5 = (char *)*param_1;
  if (param_2 - (int)pcVar5 < 1) {
    return 0xffffffa0;
  }
  if (*pcVar5 != '\x02') {
    return 0xffffff9e;
  }
  *param_1 = (int)(pcVar5 + 1);
  iVar6 = param_2 - (int)(pcVar5 + 1);
  if (0 < iVar6) {
    if (pcVar5[1] < '\0') {
      uVar8 = (byte)pcVar5[1] & 0x7f;
      if (3 < (uVar8 - 1 & 0xff)) {
        return 0xffffff9c;
      }
      if (iVar6 <= (int)uVar8) {
        return 0xffffffa0;
      }
      pbVar4 = (byte *)(pcVar5 + 2);
      *param_1 = (int)pbVar4;
      uVar2 = 0;
      pbVar7 = pbVar4;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        *param_1 = (int)pbVar7;
        uVar2 = uVar2 << 8 | (uint)bVar1;
      } while ((byte *)(pcVar5 + uVar8 + 2) != pbVar7);
      pbVar4 = pbVar4 + uVar8;
    }
    else {
      pbVar4 = (byte *)(pcVar5 + 2);
      *param_1 = (int)pbVar4;
      uVar2 = (uint)(byte)pcVar5[1];
    }
    if (uVar2 <= (uint)(param_2 - (int)pbVar4)) {
      uVar3 = FUN_ram_481800da(param_3,pbVar4,uVar2);
      *param_1 = *param_1 + uVar2;
      return uVar3;
    }
  }
  return 0xffffffa0;
}


