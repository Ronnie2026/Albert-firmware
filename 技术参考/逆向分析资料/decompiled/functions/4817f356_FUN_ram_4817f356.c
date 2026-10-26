/* Firmware entry: 0x4817f356 */

int FUN_ram_4817f356(undefined4 *param_1,int param_2,uint param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint unaff_s2;
  uint uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar7 = (byte *)*param_1;
  if (param_2 - (int)pbVar7 < 1) {
    return -0x60;
  }
  if (param_3 != *pbVar7) {
    return -0x62;
  }
  *param_1 = pbVar7 + 1;
  iVar4 = FUN_ram_4817f2d4(param_1,param_2,&uStack_14);
  if (iVar4 == 0) {
    if (uStack_14 != 0) {
      pcVar5 = (char *)*param_1;
      cVar1 = *pcVar5;
      if (-1 < cVar1) {
        bVar3 = false;
        uVar6 = uStack_14;
        while (pcVar5 = pcVar5 + 1, cVar1 == '\0') {
          *param_1 = pcVar5;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            uStack_14 = 0;
            goto LAB_ram_4817f3c4;
          }
          bVar3 = true;
          unaff_s2 = uVar6;
          cVar1 = *pcVar5;
        }
        if (bVar3) {
          uStack_14 = unaff_s2;
        }
        if ((uVar6 < 5) && ((uVar6 != 4 || (-1 < *(char *)*param_1)))) {
LAB_ram_4817f3c4:
          *param_4 = 0;
          if (uStack_14 == 0) {
            return 0;
          }
          pbVar8 = (byte *)*param_1;
          uVar6 = 0;
          pbVar7 = pbVar8 + uStack_14;
          do {
            bVar2 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            uVar6 = uVar6 << 8 | (uint)bVar2;
            *param_4 = uVar6;
            *param_1 = pbVar8;
          } while (pbVar8 != pbVar7);
          return 0;
        }
      }
    }
    iVar4 = -100;
  }
  return iVar4;
}


