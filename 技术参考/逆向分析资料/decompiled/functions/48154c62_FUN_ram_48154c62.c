/* Firmware entry: 0x48154c62 */

int FUN_ram_48154c62(int *param_1,byte *param_2,uint *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  undefined1 *puStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar15 = *param_1;
  uVar6 = *param_3;
  memset((void *)(iVar15 + 0xac),0,0x24);
  iVar8 = FUN_ram_4813ad9a(0,0x200,0x280);
  if (iVar8 == 0) {
    return 0;
  }
  if (*(short *)(iVar8 + 8) != *(short *)(iVar8 + 10)) {
    FUN_ram_4813ac74();
    return 0;
  }
  puStack_44 = *(undefined1 **)(iVar8 + 4);
  uVar13 = 0;
  if (uVar6 != 0) {
    iVar16 = 2;
    pbVar10 = param_2;
    pbVar14 = param_2;
LAB_ram_48154cd0:
    do {
      if ((int)uVar6 < 2) {
LAB_ram_48154d6e:
        uVar13 = uVar6;
        uVar7 = 0;
        uVar11 = uVar6;
        pbVar17 = pbVar10;
LAB_ram_48154d16:
        if (pbVar14 != pbVar10) {
          FUN_ram_4ff45158(pbVar14,pbVar10,uVar11);
        }
        pbVar14 = pbVar14 + uVar13;
        iVar16 = 4;
        uVar6 = uVar7;
      }
      else {
        bVar1 = pbVar10[1];
        uVar13 = (uint)bVar1;
        if ((uVar13 < 2) || ((int)uVar6 < (int)uVar13)) goto LAB_ram_48154d6e;
        bVar2 = *pbVar10;
        uVar6 = uVar6 - uVar13;
        pbVar17 = pbVar10 + uVar13;
        uVar7 = uVar6;
        uVar11 = uVar13;
        if (bVar2 == 7) {
          if (((*(ushort *)(iVar15 + 0x88) & 0x20) == 0) || (uVar13 != 2)) goto LAB_ram_48154d16;
          *(ushort *)(iVar15 + 0xac) = *(ushort *)(iVar15 + 0xac) | 0x20;
joined_r0x48154fe6:
          pbVar10 = pbVar17;
          if (uVar6 == 0) break;
          goto LAB_ram_48154cd0;
        }
        if (7 < bVar2) {
          if (bVar2 == 0x12) {
            if (((*(ushort *)(iVar15 + 0x88) & 0x100) == 0) || (uVar13 != 2)) goto LAB_ram_48154d16;
            *(ushort *)(iVar15 + 0xac) = *(ushort *)(iVar15 + 0xac) | 0x100;
          }
          else if (bVar2 == 0x13) {
            if ((((*(ushort *)(iVar15 + 0x88) & 0x200) == 0) || (uVar13 == 2)) || (0x17 < uVar13))
            goto LAB_ram_48154d16;
            *(byte *)(iVar15 + 0xb9) = pbVar10[2];
            *(ushort *)(iVar15 + 0xac) = *(ushort *)(iVar15 + 0xac) | 0x200;
            *(byte *)(iVar15 + 0xba) = bVar1 - 3;
            FUN_ram_4ff45158(iVar15 + 0xbb,pbVar10 + 3);
          }
          else {
            if (((bVar2 != 8) || ((*(ushort *)(iVar15 + 0x88) & 0x40) == 0)) || (uVar13 != 2))
            goto LAB_ram_48154d16;
            *(ushort *)(iVar15 + 0xac) = *(ushort *)(iVar15 + 0xac) | 0x40;
          }
          goto joined_r0x48154fe6;
        }
        if (bVar2 != 2) {
          if (bVar2 == 5) {
            if ((*(ushort *)(iVar15 + 0x88) & 0x10) == 0) {
              if (((*(ushort *)(iVar15 + 100) & 0x10) != 0) && (uVar13 == 6)) {
                uVar13 = (uint)pbVar10[5] |
                         (((uint)pbVar10[3] | (*(ushort *)(pbVar10 + 2) & 0xff) << 8) << 8 |
                         (uint)pbVar10[4]) << 8;
LAB_ram_48154e0a:
                if (*(uint *)(iVar15 + 0x6c) == uVar13) {
                  uVar9 = FUN_ram_48155c22();
                  *puStack_44 = 5;
                  puStack_44[1] = 6;
                  puStack_44[4] = (char)((uint)uVar9 >> 8);
                  puStack_44[5] = (char)uVar9;
                  puStack_44[2] = (char)((uint)uVar9 >> 0x18);
                  puStack_44[3] = (char)((uint)uVar9 >> 0x10);
                  puStack_44 = puStack_44 + 6;
                  goto LAB_ram_48154fdc;
                }
                goto LAB_ram_48154e12;
              }
            }
            else if (uVar13 == 6) {
              uVar13 = (((uint)pbVar10[3] | (*(ushort *)(pbVar10 + 2) & 0xff) << 8) << 8 |
                       (uint)pbVar10[4]) << 8 | (uint)pbVar10[5];
              if ((*(ushort *)(iVar15 + 100) & 0x10) != 0) goto LAB_ram_48154e0a;
LAB_ram_48154e12:
              *(uint *)(iVar15 + 0xb4) = uVar13;
              *(ushort *)(iVar15 + 0xac) = *(ushort *)(iVar15 + 0xac) | 0x10;
              goto joined_r0x48154fe6;
            }
          }
          else if (((bVar2 == 1) && ((*(ushort *)(iVar15 + 0x88) & 4) != 0)) && (uVar13 == 4)) {
            if (0x7f < ((uint)pbVar10[3] | (*(ushort *)(pbVar10 + 2) & 0xff) << 8)) {
              *(short *)(iVar15 + 0xae) = (short)CONCAT21(*(ushort *)(pbVar10 + 2),pbVar10[3]);
              *(ushort *)(iVar15 + 0xac) = *(ushort *)(iVar15 + 0xac) | 4;
              goto joined_r0x48154fe6;
            }
            puStack_44[3] = 0x80;
            puStack_44[2] = 0;
            puVar12 = puStack_44 + 4;
            *puStack_44 = 1;
            puStack_44[1] = 4;
            uVar11 = 4;
            puStack_44 = puVar12;
            if (param_4 == 0) goto LAB_ram_48154fdc;
          }
          goto LAB_ram_48154d16;
        }
        if (((*(ushort *)(iVar15 + 0x88) & 8) == 0) || (uVar13 != 6)) goto LAB_ram_48154d16;
        bVar2 = pbVar10[3];
        uVar5 = *(ushort *)(pbVar10 + 2);
        bVar3 = pbVar10[4];
        bVar4 = pbVar10[5];
        uVar11 = (uint)bVar4 | ((uint)bVar3 | ((uint)bVar2 | (uVar5 & 0xff) << 8) << 8) << 8;
        if ((~uVar11 & *(uint *)(iVar15 + 0x8c)) == 0) {
          *(uint *)(iVar15 + 0xb0) = uVar11;
          *(ushort *)(iVar15 + 0xac) = *(ushort *)(iVar15 + 0xac) | 8;
          goto joined_r0x48154fe6;
        }
        *puStack_44 = 2;
        puStack_44[1] = bVar1;
        puVar12 = puStack_44 + 6;
        puStack_44[2] = (byte)((uint)*(undefined4 *)(iVar15 + 0x8c) >> 0x18) | (byte)uVar5;
        puStack_44[3] = (byte)((uint)*(undefined4 *)(iVar15 + 0x8c) >> 0x10) | bVar2;
        puStack_44[4] = (byte)((uint)*(undefined4 *)(iVar15 + 0x8c) >> 8) | bVar3;
        puStack_44[5] = bVar4 | (byte)*(undefined4 *)(iVar15 + 0x8c);
        puStack_44 = puVar12;
        if (param_4 != 0) {
          uVar11 = 6;
          goto LAB_ram_48154d16;
        }
LAB_ram_48154fdc:
        if (iVar16 != 4) {
          iVar16 = 3;
          goto joined_r0x48154fe6;
        }
      }
      pbVar10 = pbVar17;
    } while (uVar6 != 0);
    if (iVar16 == 3) {
      *param_3 = (int)puStack_44 - *(int *)(iVar8 + 4);
      FUN_ram_4ff45158(param_2);
      goto LAB_ram_48154d4e;
    }
    if (iVar16 == 4) {
      *param_3 = (int)pbVar14 - (int)param_2;
      goto LAB_ram_48154d4e;
    }
    uVar13 = (int)pbVar17 - (int)param_2;
  }
  *param_3 = uVar13;
  iVar16 = 2;
LAB_ram_48154d4e:
  FUN_ram_4813ac74(iVar8);
  return iVar16;
}


