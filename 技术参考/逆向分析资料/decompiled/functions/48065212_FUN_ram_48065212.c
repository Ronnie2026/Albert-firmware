/* Firmware entry: 0x48065212 */

void FUN_ram_48065212(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = 2;
LAB_ram_48065220:
  uVar6 = param_1[1];
  fence();
  if ((uVar6 & 1) == 0) {
    fence();
    if (uVar6 == param_1[1]) {
      param_1[0x27] = param_1[2];
      param_1[0x28] = param_1[3];
      param_1[0x29] = param_1[4];
      param_1[0x2a] = param_1[5];
      param_1[0x2b] = param_1[6];
      param_1[0x2c] = param_1[7];
LAB_ram_48065286:
      iVar4 = 2;
LAB_ram_4806528e:
      uVar6 = param_1[8];
      fence();
      if ((uVar6 & 1) == 0) {
        fence();
        if (uVar6 == param_1[8]) {
          param_1[0x2d] = param_1[9];
          param_1[0x2e] = param_1[10];
          param_1[0x2f] = param_1[0xb];
          param_1[0x30] = param_1[0xc];
          param_1[0x31] = param_1[0xd];
          param_1[0x32] = param_1[0xe];
LAB_ram_480652f4:
          puVar8 = (uint *)(param_1 + 0x24);
          puVar5 = (uint *)(param_1 + 0x33);
          puVar7 = (uint *)(param_1 + 0xf);
          bVar1 = false;
          do {
            iVar4 = 2;
LAB_ram_4806530a:
            fence();
            if ((*puVar7 & 1) != 0) {
LAB_ram_4806534c:
              if (iVar4 == 1) goto LAB_ram_48065368;
              iVar4 = 1;
              goto LAB_ram_4806530a;
            }
            uVar3 = puVar7[2];
            uVar2 = puVar7[3];
            uVar6 = puVar7[4];
            uVar10 = puVar7[5];
            uVar9 = puVar7[6];
            fence();
            if (*puVar7 != *puVar7) goto LAB_ram_4806534c;
            *puVar5 = puVar7[1];
            puVar5[1] = uVar3;
            puVar5[2] = uVar2;
            puVar5[3] = uVar6;
            puVar5[4] = uVar10;
            puVar5[5] = uVar9;
LAB_ram_48065368:
            uVar6 = 0;
            if ((param_1[0x27] != 0) && (param_1[0x28] != 0)) {
              uVar6 = (uint)~(param_2 - param_1[0x2a]) >> 0x1f;
            }
            uVar2 = 0;
            if (param_1[0x2d] != 0) {
              uVar2 = (uint)~(param_2 - param_1[0x30]) >> 0x1f;
            }
            uVar3 = *puVar5;
            if (uVar3 != 0) {
              if (puVar5[1] == 0) {
LAB_ram_480653e4:
                uVar3 = 0;
              }
              else if ((int)(param_2 - puVar5[3]) < 0) {
                if (puVar5[1] != 5) goto LAB_ram_480653e4;
                uVar3 = uVar3 & -(uint)(29999 < param_2 - puVar5[4]);
              }
            }
            if (uVar6 != 0) {
              if (uVar2 == 0) {
                iVar4 = param_1[0x28];
                goto LAB_ram_4806543c;
              }
LAB_ram_4806544c:
              iVar4 = 0x100;
LAB_ram_4806543c:
              FUN_ram_4ff2bc94(6,iVar4);
              return;
            }
            if (uVar2 != 0) goto LAB_ram_4806544c;
            if (uVar3 != 0) {
              uVar6 = *puVar8;
              *puVar8 = uVar3;
              bVar1 = (bool)(bVar1 | uVar6 != uVar3);
            }
            puVar5 = puVar5 + 6;
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + 7;
            if (puVar5 == (uint *)(param_1 + 0x45)) {
              if (bVar1) {
                fence();
                if (*param_1 != 0) {
                  FUN_ram_4ff3e004(*param_1,0,0,2,0);
                  return;
                }
              }
              return;
            }
          } while( true );
        }
      }
      if (iVar4 == 1) goto LAB_ram_480652f4;
      iVar4 = 1;
      goto LAB_ram_4806528e;
    }
  }
  if (iVar4 == 1) goto LAB_ram_48065286;
  iVar4 = 1;
  goto LAB_ram_48065220;
}


