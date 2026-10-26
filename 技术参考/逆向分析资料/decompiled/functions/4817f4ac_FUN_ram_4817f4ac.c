/* Firmware entry: 0x4817f4ac */

undefined4 FUN_ram_4817f4ac(undefined4 *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar3 = (char *)*param_1;
  if (0 < param_2 - (int)pcVar3) {
    if (*pcVar3 != '\x01') {
      return 0xffffff9e;
    }
    *param_1 = pcVar3 + 1;
    iVar5 = param_2 - (int)(pcVar3 + 1);
    if (iVar5 < 1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffa0;
    }
    if (pcVar3[1] < '\0') {
      uVar2 = (byte)pcVar3[1] & 0x7f;
      if (3 < (uVar2 - 1 & 0xff)) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0xffffff9c;
      }
      if (iVar5 <= (int)uVar2) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0xffffffa0;
      }
      pbVar6 = (byte *)(pcVar3 + 2);
      *param_1 = pbVar6;
      uVar4 = 0;
      pbVar7 = pbVar6;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        *param_1 = pbVar7;
        uVar4 = uVar4 << 8 | (uint)bVar1;
      } while ((byte *)(pcVar3 + uVar2 + 2) != pbVar7);
      pbVar6 = pbVar6 + uVar2;
    }
    else {
      pbVar6 = (byte *)(pcVar3 + 2);
      *param_1 = pbVar6;
      uVar4 = (uint)(byte)pcVar3[1];
    }
    if (uVar4 <= (uint)(param_2 - (int)pbVar6)) {
      if (uVar4 != 1) {
        return 0xffffff9c;
      }
      *param_3 = (uint)(*pbVar6 != 0);
      *param_1 = pbVar6 + 1;
      return 0;
    }
  }
  return 0xffffffa0;
}


