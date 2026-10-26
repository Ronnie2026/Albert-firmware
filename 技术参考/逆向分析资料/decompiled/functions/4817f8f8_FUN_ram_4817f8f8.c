/* Firmware entry: 0x4817f8f8 */

int FUN_ram_4817f8f8(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int aiStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar2 = (char *)*param_1;
  if (0 < param_2 - (int)pcVar2) {
    if (*pcVar2 != '0') {
      return -0x62;
    }
    *param_1 = (uint)(pcVar2 + 1);
    iVar1 = FUN_ram_4817f2d4(param_1,param_2,aiStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    pbVar3 = (byte *)*param_1;
    if (0 < param_2 - (int)pbVar3) {
      *param_3 = (uint)*pbVar3;
      pbVar5 = pbVar3 + aiStack_24[0];
      if (0 < aiStack_24[0]) {
        if (*pbVar3 != 6) {
          return -0x62;
        }
        *param_1 = (uint)(pbVar3 + 1);
        iVar1 = FUN_ram_4817f2d4(param_1,pbVar5,param_3 + 1);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar4 = *param_1;
        param_3[2] = uVar4;
        pbVar3 = (byte *)(uVar4 + param_3[1]);
        *param_1 = (uint)pbVar3;
        if (pbVar3 == pbVar5) {
          FUN_ram_48178af2(param_4,0xc);
          return 0;
        }
        *param_4 = (uint)*pbVar3;
        *param_1 = (uint)(pbVar3 + 1);
        iVar1 = FUN_ram_4817f2d4(param_1,pbVar5,param_4 + 1);
        if (iVar1 == 0) {
          uVar4 = *param_1;
          param_4[2] = uVar4;
          pbVar3 = (byte *)(uVar4 + param_4[1]);
          *param_1 = (uint)pbVar3;
          if (pbVar3 != pbVar5) {
            return -0x66;
          }
          return 0;
        }
        return iVar1;
      }
    }
  }
  return -0x60;
}


