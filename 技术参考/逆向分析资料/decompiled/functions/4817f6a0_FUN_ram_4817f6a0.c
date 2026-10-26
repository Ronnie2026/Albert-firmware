/* Firmware entry: 0x4817f6a0 */

int FUN_ram_4817f6a0(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                    code *param_7,undefined4 param_8)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar2 = (char *)*param_1;
  if ((int)param_2 - (int)pcVar2 < 1) {
    return -0x60;
  }
  if (*pcVar2 != '0') {
    return -0x62;
  }
  *param_1 = (int)(pcVar2 + 1);
  iVar6 = FUN_ram_4817f2d4(param_1,param_2,&uStack_34);
  if (iVar6 == 0) {
    pbVar4 = (byte *)*param_1;
    if (param_2 == pbVar4 + uStack_34) {
      do {
        if (param_2 <= pbVar4) {
          return 0;
        }
        while( true ) {
          *param_1 = (int)(pbVar4 + 1);
          uVar7 = (uint)*pbVar4;
          if ((uVar7 & param_3) != param_4) {
            return -0x62;
          }
          iVar6 = (int)param_2 - (int)(pbVar4 + 1);
          if (iVar6 < 1) {
            return -0x60;
          }
          if ((char)pbVar4[1] < '\0') {
            uVar9 = pbVar4[1] & 0x7f;
            if (3 < (uVar9 - 1 & 0xff)) {
              return -100;
            }
            if (iVar6 <= (int)uVar9) {
              return -0x60;
            }
            pbVar8 = pbVar4 + 2;
            *param_1 = (int)pbVar8;
            uVar5 = 0;
            pbVar3 = pbVar8;
            do {
              bVar1 = *pbVar3;
              pbVar3 = pbVar3 + 1;
              *param_1 = (int)pbVar3;
              uVar5 = uVar5 << 8 | (uint)bVar1;
            } while (pbVar4 + uVar9 + 2 != pbVar3);
            pbVar8 = pbVar8 + uVar9;
          }
          else {
            pbVar8 = pbVar4 + 2;
            *param_1 = (int)pbVar8;
            uVar5 = (uint)pbVar4[1];
          }
          if ((uint)((int)param_2 - (int)pbVar8) < uVar5) {
            return -0x60;
          }
          if (((uVar7 & param_5) != param_6) || (param_7 == (code *)0x0)) break;
          uStack_34 = uVar5;
          iVar6 = (*param_7)(param_8,uVar7,pbVar8,uVar5);
          if (iVar6 != 0) {
            return iVar6;
          }
          pbVar4 = (byte *)(uVar5 + *param_1);
          *param_1 = (int)pbVar4;
          if (param_2 <= pbVar4) {
            return 0;
          }
        }
        pbVar4 = pbVar8 + uVar5;
        *param_1 = (int)pbVar4;
      } while( true );
    }
    iVar6 = -0x66;
  }
  return iVar6;
}


