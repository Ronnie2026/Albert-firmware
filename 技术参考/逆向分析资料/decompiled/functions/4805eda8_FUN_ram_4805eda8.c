/* Firmware entry: 0x4805eda8 */

undefined4 FUN_ram_4805eda8(int param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte local_168 [4];
  char cStack_164;
  char cStack_163;
  char cStack_162;
  char cStack_161;
  char cStack_160;
  char cStack_15f;
  undefined4 uStack_68;
  undefined1 uStack_54;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_168[0] = 0;
  local_168[1] = 0;
  local_168[2] = 0;
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  uVar11 = (uint)*(ushort *)(param_2 * 0x50 + param_1 + 0x186);
  if (*(char *)(param_1 + 0x1298) == '\0') {
    FUN_ram_4ff3ee10(param_1);
    uVar5 = 1;
  }
  else {
    pbVar3 = (byte *)(param_1 + 0x718);
    bVar1 = 0;
    uVar10 = 1;
    uVar8 = 0;
    do {
      while (*pbVar3 != param_2) {
LAB_ram_4805ee1c:
        bVar1 = bVar1 + 1;
        pbVar3 = pbVar3 + 0xf4;
        if (*(byte *)(param_1 + 0x1298) <= bVar1) goto LAB_ram_4805ee98;
      }
      if (pbVar3[0xf1] == 0) {
LAB_ram_4805ee6e:
        uVar10 = 0;
      }
      else {
        uVar7 = param_3 - *(int *)(pbVar3 + 0xd8);
        if (uVar11 == 0) {
          uVar6 = 1000;
          if (*(int *)(pbVar3 + 0xe4) == 0) {
LAB_ram_4805ee6a:
            if (uVar7 <= uVar6) {
LAB_ram_4805ef52:
              iVar4 = FUN_ram_48025b94();
              if (*(int *)(pbVar3 + 0xe4) == 0) {
                uVar7 = 1000000;
              }
              else {
                uVar6 = *(int *)(pbVar3 + 0xe4) * 3;
                uVar7 = 100000;
                if (99 < uVar6) {
                  if (5000 < uVar6) {
                    uVar6 = 5000;
                  }
                  uVar7 = uVar6 * 1000;
                }
              }
              goto LAB_ram_4805efc4;
            }
          }
          else {
            uVar6 = *(int *)(pbVar3 + 0xe4) * 3;
            if (uVar6 < 100) {
              if (uVar7 < 0x65) goto LAB_ram_4805ef52;
            }
            else {
              if (uVar6 < 0x1389) goto LAB_ram_4805ee6a;
              if (uVar7 < 0x1389) goto LAB_ram_4805ef52;
            }
          }
          goto LAB_ram_4805ee6e;
        }
        if (uVar11 < uVar7) goto LAB_ram_4805ee6e;
        iVar4 = FUN_ram_48025b94();
        uVar7 = uVar11 * 1000;
LAB_ram_4805efc4:
        if (pbVar3[0xe0] == 0) goto LAB_ram_4805ee6e;
        uVar10 = uVar10 & (uint)(iVar4 - *(int *)(pbVar3 + 0xdc)) <= uVar7 &
                 (uint)~(iVar4 - *(int *)(pbVar3 + 0xdc)) >> 0x1f;
      }
      if (2 < uVar8) goto LAB_ram_4805ee1c;
      bVar1 = bVar1 + 1;
      local_168[uVar8] = pbVar3[1];
      uVar8 = uVar8 + 1 & 0xff;
      pbVar3 = pbVar3 + 0xf4;
    } while (bVar1 < *(byte *)(param_1 + 0x1298));
LAB_ram_4805ee98:
    FUN_ram_4ff3ee10(param_1);
    if (uVar10 == 0) {
LAB_ram_4805ef1c:
      uVar5 = 0;
    }
    else {
      pbVar3 = local_168;
      pbVar9 = pbVar3 + uVar8;
      if (uVar8 != 0) {
        do {
          bVar1 = *pbVar3;
          FUN_ram_4ff3ec14(param_4 + 0x2864,0xffffffff);
          piVar2 = *(int **)(param_4 + 0x1e08);
          FUN_ram_4ff3ee10(param_4 + 0x2864);
          if (piVar2 == (int *)0x0) goto LAB_ram_4805ef1c;
          memset(&cStack_164,0,0x134);
          uStack_68 = 0xffffffff;
          uStack_54 = 1;
          iVar4 = (**(code **)(*piVar2 + 0x15c))(piVar2,bVar1,&cStack_164);
          if ((((iVar4 == 0) || (cStack_164 == '\0')) || (cStack_163 == '\0')) ||
             (((cStack_162 != '\0' || (cStack_161 != '\0')) ||
              ((cStack_160 != '\0' || (pbVar3 = pbVar3 + 1, cStack_15f != '\0'))))))
          goto LAB_ram_4805ef1c;
        } while (pbVar3 != pbVar9);
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}


