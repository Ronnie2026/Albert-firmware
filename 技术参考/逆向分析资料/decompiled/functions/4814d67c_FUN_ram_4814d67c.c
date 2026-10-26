/* Firmware entry: 0x4814d67c */

undefined4 FUN_ram_4814d67c(int *param_1,int *param_2)

{
  short *psVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  byte bVar19;
  undefined1 *puVar20;
  undefined1 local_50 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar20 = local_50;
  iVar12 = *param_2;
  pbVar10 = *(byte **)(iVar12 + 4);
  if (((pbVar10[9] != 6) || ((pbVar10[6] & 0x3f) != 0 || pbVar10[7] != 0)) ||
     (*(ushort *)(iVar12 + 8) < 0x28)) {
    return 0x40;
  }
  uVar16 = *pbVar10 & 0xf;
  iVar17 = uVar16 * 4;
  pbVar10 = pbVar10 + iVar17;
  puVar14 = *(undefined4 **)*param_1;
  uVar3 = FUN_ram_48137fc8(*(undefined2 *)(pbVar10 + 0xc));
  if ((uVar3 & 0x17) != 0x10) {
    return 0x40;
  }
  uVar3 = FUN_ram_48137fc8(*(undefined2 *)(pbVar10 + 0xc));
  uVar3 = (uVar3 >> 0xc) + uVar16 & 0x3fff;
  uVar13 = uVar3 * 4;
  if (*(ushort *)(iVar12 + 10) < uVar13) {
    return 0x40;
  }
  iVar12 = FUN_ram_4813b5b8(0,0x280,*param_2);
  if (iVar12 == 0) {
    return 0x40;
  }
  *param_2 = iVar12;
  psVar1 = *(short **)(iVar12 + 4);
  if (((*(int *)(psVar1 + 6) == puVar14[5]) && (*(int *)(psVar1 + 8) == puVar14[6])) &&
     (*(int *)pbVar10 == puVar14[(*(byte *)(puVar14 + 2) & 0xf) + 2])) {
LAB_ram_4814d854:
    if ((*psVar1 != *(short *)(puVar14 + 2)) || (psVar1[3] != *(short *)((int)puVar14 + 0xe))) {
      puVar7 = puVar14 + 2;
      goto LAB_ram_4814d79c;
    }
    puVar7 = puVar14 + 2;
    if (psVar1[4] != *(short *)(puVar14 + 4)) goto LAB_ram_4814d79c;
    uVar4 = FUN_ram_48137fc8(*(undefined2 *)(pbVar10 + 0xc));
    uVar5 = FUN_ram_48137fc8(*(undefined2 *)(puVar7 + uVar16 + 3));
    if (((uVar4 >> 0xc & 0xffff) != (uVar5 >> 0xc & 0xffff)) ||
       ((5 < uVar16 &&
        (iVar6 = FUN_ram_4ff4511a(psVar1 + 10,puVar14 + 7,(uVar16 - 5) * 4), iVar6 != 0))))
    goto LAB_ram_4814d79c;
    uVar4 = FUN_ram_48137fc8(*(undefined2 *)(pbVar10 + 0xc));
    if (5 < (uVar4 >> 0xc & 0xffff)) {
      uVar4 = FUN_ram_48137fc8(*(undefined2 *)(pbVar10 + 0xc));
      iVar6 = FUN_ram_4ff4511a(pbVar10 + 0x14,puVar7 + uVar16 + 5,((uVar4 >> 0xc & 0xffff) - 5) * 4)
      ;
      if (iVar6 != 0) goto LAB_ram_4814d79c;
    }
    uVar4 = FUN_ram_48137fc8(*(undefined2 *)(pbVar10 + 0xc));
    if ((uVar4 & 0x20) == 0) {
      if (*(short *)((int)puVar7 + iVar17 + 0x12) != *(short *)(pbVar10 + 0x12))
      goto LAB_ram_4814d79c;
      bVar19 = 0;
    }
    else {
      iVar6 = FUN_ram_48137fc8();
      if ((iVar6 - 1U & 0xffff) < 0xff) {
        puVar20 = local_50 + 1;
        bVar19 = 1;
        local_50[0] = (char)iVar6;
      }
      else {
        local_50[1] = (undefined1)((uint)iVar6 >> 8);
        local_50[0] = 0;
        puVar20 = local_50 + 3;
        bVar19 = 1;
        local_50[2] = (char)iVar6;
      }
    }
    iVar6 = FUN_ram_48137fc8(*(undefined2 *)(pbVar10 + 0xe));
    iVar17 = FUN_ram_48137fc8(*(undefined2 *)((int)puVar7 + iVar17 + 0xe));
    uVar4 = iVar6 - iVar17;
    uVar5 = uVar4 & 0xffff;
    puVar8 = puVar20;
    if (uVar5 != 0) {
      uVar9 = (undefined1)uVar4;
      puVar8 = puVar20 + 1;
      if (0xff < uVar5) {
        puVar20[2] = (char)(uVar4 * 0x10000 >> 0x10);
        puVar20[1] = (char)(uVar5 >> 8);
        puVar8 = puVar20 + 3;
        uVar9 = 0;
      }
      *puVar20 = uVar9;
      bVar19 = bVar19 | 2;
    }
    iVar17 = FUN_ram_48137fd6(*(undefined4 *)(pbVar10 + 8));
    iVar6 = FUN_ram_48137fd6(puVar7[uVar16 + 2]);
    uVar4 = iVar17 - iVar6;
    if (iVar17 == iVar6) {
      iVar17 = FUN_ram_48137fd6(*(undefined4 *)(pbVar10 + 4));
      iVar6 = FUN_ram_48137fd6(puVar7[uVar16 + 1]);
      uVar16 = iVar17 - iVar6;
      if (iVar17 == iVar6) {
        puVar20 = puVar8;
        if ((bVar19 != 0) ||
           ((psVar1[1] != *(short *)((int)puVar14 + 10) &&
            (uVar3 = FUN_ram_48137fc8(), uVar3 == uVar13)))) goto LAB_ram_4814dc54;
        goto LAB_ram_4814d79c;
      }
      uVar5 = 0;
      bVar18 = bVar19;
    }
    else {
      if (0xffff < uVar4) goto LAB_ram_4814d79c;
      uVar5 = uVar4 & 0xffff;
      uVar9 = (undefined1)uVar4;
      puVar20 = puVar8 + 1;
      if (0xff < uVar5) {
        puVar8[2] = uVar9;
        puVar8[1] = (char)(uVar5 >> 8);
        puVar20 = puVar8 + 3;
        uVar9 = 0;
      }
      *puVar8 = uVar9;
      iVar17 = FUN_ram_48137fd6(*(undefined4 *)(pbVar10 + 4));
      iVar6 = FUN_ram_48137fd6(puVar7[uVar16 + 1]);
      bVar19 = bVar19 | 4;
      uVar16 = iVar17 - iVar6;
      puVar8 = puVar20;
      bVar18 = bVar19;
      if (iVar17 == iVar6) goto LAB_ram_4814dc54;
    }
    if (uVar16 < 0x10000) {
      uVar4 = uVar16 & 0xffff;
      uVar9 = (undefined1)uVar16;
      puVar20 = puVar8 + 1;
      if (0xff < uVar4) {
        puVar8[2] = uVar9;
        puVar8[1] = (char)(uVar4 >> 8);
        puVar20 = puVar8 + 3;
        uVar9 = 0;
      }
      *puVar8 = uVar9;
      if (bVar18 == 0) {
        iVar17 = FUN_ram_48137fc8(*(undefined2 *)((int)puVar14 + 10));
        if (uVar16 == iVar17 + uVar3 * -4) {
          bVar19 = 0xf;
          puVar20 = local_50;
        }
        else {
          bVar19 = 8;
        }
      }
      else {
        bVar19 = bVar18 | 8;
        if (bVar19 == 0xc) {
          if ((uVar4 == uVar5) &&
             (iVar17 = FUN_ram_48137fc8(*(undefined2 *)((int)puVar14 + 10)),
             uVar16 == iVar17 + uVar3 * -4)) {
            bVar19 = 0xb;
            puVar20 = local_50;
          }
        }
        else if ((bVar18 & 0xfb | 8) == 0xb) goto LAB_ram_4814d79c;
      }
LAB_ram_4814dc54:
      iVar17 = FUN_ram_48137fc8(psVar1[2]);
      iVar6 = FUN_ram_48137fc8(*(undefined2 *)(puVar14 + 3));
      uVar3 = iVar17 - iVar6;
      uVar16 = uVar3 & 0xffff;
      puVar8 = puVar20;
      if (uVar16 != 1) {
        uVar9 = (undefined1)uVar3;
        puVar8 = puVar20 + 1;
        if (0xfe < (uVar16 - 1 & 0xffff)) {
          puVar20[2] = (char)(uVar3 * 0x10000 >> 0x10);
          puVar20[1] = (char)(uVar16 >> 8);
          puVar8 = puVar20 + 3;
          uVar9 = 0;
        }
        *puVar20 = uVar9;
        bVar19 = bVar19 | 0x20;
      }
      uVar3 = FUN_ram_48137fc8(*(undefined2 *)(pbVar10 + 0xc));
      if ((uVar3 & 8) != 0) {
        bVar19 = bVar19 | 0x10;
      }
      uVar2 = FUN_ram_48137fc8(*(undefined2 *)(pbVar10 + 0x10));
      FUN_ram_4ff45158(puVar7,psVar1,uVar13);
      uVar3 = (int)puVar8 - (int)local_50 & 0xffff;
      if ((*(char *)((int)param_1 + 9) == '\0') ||
         (*(char *)((int)param_1 + 5) != *(char *)((int)puVar14 + 6))) {
        *(char *)((int)param_1 + 5) = *(char *)((int)puVar14 + 6);
        iVar17 = FUN_ram_4813ab98(iVar12,(uVar13 - 4) - uVar3 & 0xffff);
        if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/netif/ppp/vj.c",0x19c,"vj_compress_tcp",
                           "pbuf_remove_header failed");
        }
        pbVar11 = *(byte **)(iVar12 + 4);
        *pbVar11 = bVar19 | 0x40;
        pbVar10 = pbVar11 + 2;
        pbVar11[1] = *(byte *)((int)puVar14 + 6);
      }
      else {
        iVar17 = FUN_ram_4813ab98(iVar12,(uVar13 - 3) - uVar3 & 0xffff);
        if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/netif/ppp/vj.c",0x1a5,"vj_compress_tcp",
                           "pbuf_remove_header failed");
        }
        pbVar10 = *(byte **)(iVar12 + 4);
        *pbVar10 = bVar19;
        pbVar10 = pbVar10 + 1;
      }
      pbVar10[1] = (byte)uVar2;
      *pbVar10 = (byte)((ushort)uVar2 >> 8);
      FUN_ram_4ff45158(pbVar10 + 2,local_50,uVar3);
      return 0x80;
    }
  }
  else {
    puVar7 = (undefined4 *)*param_1;
    do {
      puVar15 = puVar14;
      puVar14 = (undefined4 *)*puVar15;
      if (((*(int *)(psVar1 + 6) == puVar14[5]) && (*(int *)(psVar1 + 8) == puVar14[6])) &&
         (*(int *)pbVar10 == puVar14[(*(byte *)(puVar14 + 2) & 0xf) + 2])) {
        if (puVar7 == puVar14) {
          *param_1 = (int)puVar15;
        }
        else {
          *puVar15 = *puVar14;
          *puVar14 = *puVar7;
          *puVar7 = puVar14;
        }
        goto LAB_ram_4814d854;
      }
    } while (puVar7 != puVar14);
    *param_1 = (int)puVar15;
    puVar7 = puVar14 + 2;
  }
LAB_ram_4814d79c:
  FUN_ram_4ff45158(puVar7,psVar1,uVar13);
  uVar9 = *(undefined1 *)((int)puVar14 + 6);
  *(undefined1 *)((int)psVar1 + 9) = uVar9;
  *(undefined1 *)((int)param_1 + 5) = uVar9;
  return 0x70;
}


