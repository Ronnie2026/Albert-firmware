/* Firmware entry: 0x480386ea */

void FUN_ram_480386ea(int param_1,int param_2,int param_3,uint param_4,int param_5,code *param_6,
                     char *param_7)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  char cVar19;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8 [10];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_7 != (char *)0x0) {
    *param_7 = '\0';
  }
  if ((((param_3 == 0) || (uVar15 = *(uint *)(param_2 + 0x480), 0x10 < uVar15)) || (0x10 < param_4))
     || (0x14 < *(byte *)(param_5 + 0x88))) {
    return;
  }
  if (param_4 != 0) {
    iVar9 = param_3 + param_4 * 0x48;
    cVar19 = '\0';
    do {
      if (uVar15 != 0) {
        iVar12 = *(int *)(param_3 + 0x10);
        iVar17 = *(int *)(param_3 + 0x14);
        uVar18 = 0;
        iVar16 = param_2;
        do {
          if (((*(int *)(iVar16 + 0x10) == iVar12) && (*(int *)(iVar16 + 0x14) == iVar17)) &&
             ((iVar13 = *(int *)(param_3 + 0x18), iVar13 == *(int *)(iVar16 + 0x18) &&
              ((iVar14 = *(int *)(param_3 + 0x20), iVar14 == *(int *)(iVar16 + 0x20) &&
               (iVar10 = *(int *)(param_3 + 0x24), iVar10 == *(int *)(iVar16 + 0x24))))))) {
            iVar4 = FUN_ram_4ff4511a(param_3,iVar16,0xc);
            if ((iVar4 == 0) &&
               (iVar4 = FUN_ram_4ff4511a(param_3 + 0x28,iVar16 + 0x28,0x20), iVar4 == 0)) {
              uVar18 = 0;
              uVar15 = (uint)*(ushort *)(param_1 + 0x22500);
              iVar16 = param_1;
              if (uVar15 != 0) goto LAB_ram_480387f0;
              break;
            }
          }
          uVar18 = uVar18 + 1;
          iVar16 = iVar16 + 0x48;
        } while (uVar18 != uVar15);
      }
LAB_ram_48038926:
      param_3 = param_3 + 0x48;
      if (iVar9 == param_3) goto LAB_ram_4803894e;
      uVar15 = *(uint *)(param_2 + 0x480);
    } while( true );
  }
  cVar19 = '\0';
LAB_ram_4803894e:
  if (*(char *)(param_1 + 0x22502) != '\0') {
    uVar15 = 0;
    do {
      iVar9 = uVar15 * 0x40 + param_1;
      iVar16 = (uVar15 + 0x880) * 0x40;
      iVar12 = param_1 + iVar16;
      if (((*(int *)(iVar9 + 0x22010) == *(int *)(param_5 + 0x518)) &&
          (*(int *)(iVar9 + 0x22014) == *(int *)(param_5 + 0x51c))) &&
         ((iVar17 = FUN_ram_4ff4511a(param_5 + 0x500,iVar12,0xc), iVar17 == 0 &&
          ((*(byte *)(param_5 + 0x88) - 1 & 0xff) < 0x14)))) {
        uVar18 = 0;
        iVar17 = *(int *)(param_5 + 0x90);
        piVar6 = (int *)(param_5 + 200);
        while (*(int *)(iVar9 + 0x22018) != iVar17) {
          uVar18 = uVar18 + 1;
          if (*(byte *)(param_5 + 0x88) == uVar18) goto LAB_ram_4803896c;
          iVar17 = *piVar6;
          piVar6 = piVar6 + 0xe;
        }
        local_c8[0] = 0;
        local_c8[1] = 0;
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_c8[4] = 0;
        local_c8[5] = 0;
        local_c8[6] = 0;
        local_c8[7] = 0;
        iVar9 = (*param_6)(uVar18 * 0x38 + 0x90 + param_5,local_c8);
        if ((iVar9 == 0) ||
           (iVar9 = FUN_ram_4ff4511a(local_c8,param_1 + iVar16 + 0x1c,0x20), iVar9 != 0))
        goto LAB_ram_4803896c;
        uVar15 = uVar15 + 1 & 0xff;
      }
      else {
LAB_ram_4803896c:
        if (*(byte *)(param_1 + 0x22502) <= uVar15) {
          cVar19 = '\x01';
          break;
        }
        uVar18 = *(byte *)(param_1 + 0x22502) - 1;
        uVar11 = uVar18 & 0xff;
        *(char *)(param_1 + 0x22502) = (char)uVar18;
        if (uVar15 != uVar11) {
          FUN_ram_4ff45158(iVar12,(uVar11 + 0x880) * 0x40 + param_1,0x3c);
          uVar11 = (uint)*(byte *)(param_1 + 0x22502);
        }
        memset((void *)((uVar11 + 0x880) * 0x40 + param_1),0,0x3c);
        cVar19 = '\x01';
      }
    } while (uVar15 < *(byte *)(param_1 + 0x22502));
  }
  if (param_7 != (char *)0x0) {
    *param_7 = cVar19;
  }
  return;
LAB_ram_480387f0:
  if ((((*(int *)(iVar16 + 0x10) != iVar12) || (*(int *)(iVar16 + 0x14) != iVar17)) ||
      (*(int *)(iVar16 + 0x18) != iVar13)) ||
     ((*(int *)(iVar16 + 0x20) != iVar14 || (*(int *)(iVar16 + 0x24) != iVar10))))
  goto LAB_ram_480387e6;
  iVar4 = FUN_ram_4ff4511a(iVar16,param_3,0xc);
  if ((iVar4 != 0) || (iVar4 = FUN_ram_4ff4511a(iVar16 + 0x28,param_3 + 0x28,0x20), iVar4 != 0))
  goto LAB_ram_480387e6;
  piVar6 = (int *)(uVar18 * 0x88 + param_1);
  cVar1 = (char)piVar6[0x21];
  if (cVar1 != '\0') {
    piVar3 = local_c8;
    piVar8 = piVar6;
    do {
      piVar7 = piVar8;
      piVar5 = piVar3;
      iVar17 = piVar7[1];
      iVar16 = piVar7[2];
      iVar12 = piVar7[3];
      *piVar5 = *piVar7;
      piVar5[1] = iVar17;
      piVar5[2] = iVar16;
      piVar5[3] = iVar12;
      piVar8 = piVar7 + 4;
      piVar3 = piVar5 + 4;
    } while (piVar8 != piVar6 + 0x20);
    iVar12 = piVar7[5];
    iVar17 = *(int *)(param_5 + 0x518);
    piVar5[4] = *piVar8;
    iVar16 = local_c8[4];
    piVar5[5] = iVar12;
    iVar12 = local_c8[5];
    if (((iVar17 == local_c8[4]) && (*(int *)(param_5 + 0x51c) == local_c8[5])) &&
       ((iVar13 = FUN_ram_4ff4511a(param_5 + 0x500,local_c8,0xc), iVar17 = local_c8[6], iVar13 == 0
        && ((*(byte *)(param_5 + 0x88) - 1 & 0xff) < 0x14)))) {
      piVar6 = (int *)(param_5 + 0x90);
      uVar11 = 0;
      while (iVar13 = *piVar6, piVar6 = piVar6 + 0xe, local_c8[6] != iVar13) {
        uVar11 = uVar11 + 1;
        if (*(byte *)(param_5 + 0x88) == uVar11) goto LAB_ram_480388cc;
      }
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      iVar13 = (*param_6)(uVar11 * 0x38 + 0x90 + param_5,&uStack_e8);
      if ((iVar13 == 0) || (iVar13 = FUN_ram_4ff4511a(&uStack_e8,&uStack_a0,0x20), iVar13 != 0)) {
        uVar15 = (uint)*(ushort *)(param_1 + 0x22500);
        goto LAB_ram_480388cc;
      }
      bVar2 = *(byte *)(param_1 + 0x22502);
      uVar15 = (uint)bVar2;
      if (uVar15 == 0) {
        cVar19 = '\x01';
        uVar15 = 0;
LAB_ram_48038b7c:
        iVar13 = uVar15 * 0x40 + param_1;
        *(char *)(param_1 + 0x22502) = cVar19;
        piVar6 = (int *)((uVar15 + 0x880) * 0x40 + param_1);
        *piVar6 = local_c8[0];
        piVar6[2] = local_c8[2];
        piVar6[1] = local_c8[1];
        *(undefined4 *)(iVar13 + 0x2201c) = uStack_a0;
        *(undefined4 *)(iVar13 + 0x22020) = uStack_9c;
        *(undefined4 *)(iVar13 + 0x22024) = uStack_98;
        *(undefined4 *)(iVar13 + 0x22028) = uStack_94;
        *(undefined4 *)(iVar13 + 0x2202c) = uStack_90;
        *(undefined4 *)(iVar13 + 0x22030) = uStack_8c;
        *(undefined4 *)(iVar13 + 0x22034) = uStack_88;
        *(undefined4 *)(iVar13 + 0x22038) = uStack_84;
        uVar15 = (uint)*(ushort *)(param_1 + 0x22500);
        *(int *)(iVar13 + 0x22010) = iVar16;
        *(int *)(iVar13 + 0x22014) = iVar12;
        *(int *)(iVar13 + 0x22018) = iVar17;
        goto LAB_ram_480388cc;
      }
      uVar11 = 0;
      iVar13 = param_1 + 0x22000;
      do {
        if ((((*(int *)(iVar13 + 0x10) == iVar16) && (*(int *)(iVar13 + 0x14) == iVar12)) &&
            (iVar17 == *(int *)(iVar13 + 0x18))) &&
           (iVar14 = FUN_ram_4ff4511a(iVar13,local_c8,0xc), iVar14 == 0)) {
          iVar16 = uVar11 * 0x40 + param_1;
          *(undefined4 *)(iVar16 + 0x2201c) = uStack_a0;
          *(undefined4 *)(iVar16 + 0x22020) = uStack_9c;
          *(undefined4 *)(iVar16 + 0x22024) = uStack_98;
          *(undefined4 *)(iVar16 + 0x22028) = uStack_94;
          *(undefined4 *)(iVar16 + 0x2202c) = uStack_90;
          *(undefined4 *)(iVar16 + 0x22030) = uStack_8c;
          *(undefined4 *)(iVar16 + 0x22034) = uStack_88;
          *(undefined4 *)(iVar16 + 0x22038) = uStack_84;
          uVar15 = (uint)*(ushort *)(param_1 + 0x22500);
          goto LAB_ram_480388cc;
        }
        uVar11 = uVar11 + 1;
        iVar13 = iVar13 + 0x40;
      } while (uVar15 != uVar11);
      if (uVar15 != 0x14) {
        cVar19 = bVar2 + 1;
        goto LAB_ram_48038b7c;
      }
    }
    else {
LAB_ram_480388cc:
      cVar19 = cVar1;
      if ((uVar18 & 0xffff) < uVar15) {
        uVar11 = uVar15 - 1 & 0xffff;
        *(short *)(param_1 + 0x22500) = (short)((uVar15 - 1) * 0x10000 >> 0x10);
        if ((uVar18 & 0xffff) != uVar11) {
          FUN_ram_4ff45158(uVar18 * 0x88 + param_1,uVar11 * 0x88 + param_1,0x85);
          uVar11 = (uint)*(ushort *)(param_1 + 0x22500);
        }
        memset((void *)(uVar11 * 0x88 + param_1),0,0x85);
      }
    }
  }
  goto LAB_ram_48038926;
LAB_ram_480387e6:
  uVar18 = uVar18 + 1;
  iVar16 = iVar16 + 0x88;
  if (uVar15 == uVar18) goto LAB_ram_48038926;
  goto LAB_ram_480387f0;
}


