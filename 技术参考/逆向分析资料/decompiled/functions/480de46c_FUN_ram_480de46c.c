/* Firmware entry: 0x480de46c */

void FUN_ram_480de46c(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  uint uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  uint3 uStack_dc;
  undefined1 uStack_d9;
  int iStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_c8;
  uint local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint local_b4 [2];
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1;
  FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
  puVar8 = (uint *)(iVar2 + 0xb38);
  puVar6 = &local_c4;
  do {
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    *puVar6 = *puVar8;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar8 = puVar8 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar8 != (uint *)(iVar2 + 0xbd8));
  *puVar6 = *puVar8;
  FUN_ram_4ff3ee10(iVar2 + 0xb18);
  FUN_ram_4809e702(param_1,&local_c4,param_2);
  iVar2 = param_1[0x4e];
  if (iVar2 == 0) {
    if (param_1[0x4f] == 0) {
      if ((char)param_1[0x54] == '\0') {
        if ((((*(char *)((int)param_1 + 0x14e) != '\0') && ((uint)(param_2 - param_1[0x4d]) < 0x3e9)
             ) && (((*(byte *)((int)param_1 + 0x9d) & 7) == 0 &&
                   ((((FUN_ram_480579ea(&uStack_e8,param_1 + 1,param_2), (byte)uStack_e8 != 0 &&
                      (iStack_e0 != 0)) && (iVar2 = FUN_ram_4805c396(*param_1,7,2,0x14), iVar2 != 0)
                     ) && (((char)param_1[5] == '\0' || (param_1[7] == 0)))))))) &&
           (_uStack_dc == param_1[10])) {
          FUN_ram_4ff45158(param_1 + 5,&uStack_e8,0x12);
          *(undefined1 *)((int)param_1 + 0x79) = 0;
          *(undefined2 *)((int)param_1 + 0x7a) = 0;
          FUN_ram_4ff45158(param_1 + 0x21,&uStack_e8,0x12);
          iVar2 = param_1[0x27];
          local_c4 = param_1[0x26];
          iVar9 = param_1[0x29];
          iVar10 = param_1[0x2c];
          uStack_c0._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
          uStack_c0._0_2_ =
               CONCAT11((byte)uStack_e8 | *(byte *)((int)param_1 + 0x9d) & 8 |
                        ((char)param_1[0x53] + '\x01') * '\x10',(char)iVar2);
          *(undefined1 *)(param_1 + 0x55) = 0;
          *(undefined1 *)((int)param_1 + 0x151) = 0;
          *(undefined1 *)((int)param_1 + 0x152) = 0;
          *(undefined1 *)((int)param_1 + 0x14d) = 0;
          *(undefined1 *)((int)param_1 + 0x156) = 0;
          uStack_bc = param_1[0x28];
          uStack_b8 = iVar9;
          local_b4[0] = param_1[0x2a];
          local_b4[1] = param_1[0x2b];
          uStack_ac = iVar10;
          iStack_a8 = param_1[0x2d];
          iStack_a4 = param_1[0x2e];
          uVar3 = (local_c4 & 0xff) + (local_c4 >> 8) & 0xffff;
          uVar7 = (undefined1)uVar3;
          if (*(byte *)(param_1 + 0x27) != 0) {
            uVar4 = 0;
            do {
              if (uVar4 != 1) {
                uVar3 = uVar3 + *(byte *)((int)&uStack_c0 + uVar4 + 1) & 0xffff;
              }
              uVar7 = (undefined1)uVar3;
              uVar4 = uVar4 + 1;
            } while (*(byte *)(param_1 + 0x27) != uVar4);
          }
          uStack_c0._3_1_ = (undefined1)((uint)iVar2 >> 0x18);
          uStack_c0._0_3_ = CONCAT12(uVar7,(undefined2)uStack_c0);
          uStack_b8._3_1_ = (undefined1)((uint)iVar9 >> 0x18);
          uStack_b8._0_3_ = (uint3)(ushort)iVar9;
          uStack_ac._3_1_ = (undefined1)((uint)iVar10 >> 0x18);
          uStack_ac._0_3_ = CONCAT12(2,(short)iVar10);
          param_1[0x33] = 0;
          param_1[0x35] = uStack_ac;
          param_1[0x30] = uStack_c0;
          param_1[0x32] = uStack_b8;
          param_1[0x37] = param_1[0x2e];
          param_1[0x2f] = local_c4;
          param_1[0x31] = param_1[0x28];
          param_1[0x34] = param_1[0x2b];
          param_1[0x36] = param_1[0x2d];
          local_b4[0] = 0;
          iVar2 = FUN_ram_4805cb5e(*param_1,param_1 + 0x2f,1,2,2,1,param_3 + 100000,0xf,
                                   param_1 + 0x4e,0x80,0,1,0,0);
          if (iVar2 == 0) {
            if ((iStack_e0 == param_1[7]) && (*(char *)((int)param_1 + 0x79) == '\0')) {
              *(undefined1 *)(param_1 + 5) = 0;
              *(undefined1 *)((int)param_1 + 0x16) = 0;
              *(undefined1 *)((int)param_1 + 0x17) = 0;
              *(undefined1 *)(param_1 + 6) = 0;
              *(undefined1 *)((int)param_1 + 0x19) = 0;
              *(undefined1 *)(param_1 + 7) = 0;
              *(undefined1 *)((int)param_1 + 0x1d) = 0;
              *(undefined1 *)((int)param_1 + 0x1e) = 0;
              *(undefined1 *)((int)param_1 + 0x1f) = 0;
              *(undefined1 *)(param_1 + 8) = 0;
              *(undefined1 *)((int)param_1 + 0x21) = 0;
              *(undefined1 *)((int)param_1 + 0x22) = 0;
              *(undefined1 *)((int)param_1 + 0x23) = 0;
              *(undefined2 *)(param_1 + 9) = 0;
            }
            FUN_ram_4805c6b0(*param_1,7,3,0);
            return;
          }
        }
      }
      else {
        if ((char)param_1[0x55] != '\0') {
          FUN_ram_480c3f56(param_1,1,3);
          return;
        }
        if (99 < (uint)(param_2 - param_1[0x50])) {
          iVar2 = *param_1;
          if ((*(char *)((int)param_1 + 0x14e) == '\0') || (1000 < (uint)(param_2 - param_1[0x4d])))
          {
            if (*(char *)(iVar2 + 0xb12) != '\0') {
              *(undefined1 *)(iVar2 + 0xb16) = 1;
            }
          }
          else {
            FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
            puVar8 = (uint *)(iVar2 + 0xb38);
            puVar6 = &local_c4;
            do {
              uVar3 = puVar8[1];
              uVar4 = puVar8[2];
              uVar5 = puVar8[3];
              *puVar6 = *puVar8;
              puVar6[1] = uVar3;
              puVar6[2] = uVar4;
              puVar6[3] = uVar5;
              puVar8 = puVar8 + 4;
              puVar6 = puVar6 + 4;
            } while (puVar8 != (uint *)(iVar2 + 0xbd8));
            *puVar6 = *puVar8;
            FUN_ram_4ff3ee10(iVar2 + 0xb18);
            if ((((uStack_bc._2_1_ != '\0') && ((char)uStack_b8 != '\0')) &&
                (*(byte *)((int)param_1 + 0x14d) < 3)) &&
               (((*(char *)((int)param_1 + 0x155) == '\0' || (99 < (uint)(param_2 - param_1[0x52])))
                && (iVar2 = FUN_ram_4805c396(*param_1,7,2,0x14), iVar2 != 0)))) {
              uStack_e8 = param_1[0x26];
              iVar10 = param_1[0x29];
              iVar2 = param_1[0x2c];
              iStack_e0 = param_1[0x28];
              _uStack_dc = iVar10;
              iStack_d8 = param_1[0x2a];
              iStack_d4 = param_1[0x2b];
              uStack_d0 = iVar2;
              iStack_cc = param_1[0x2d];
              iStack_c8 = param_1[0x2e];
              *(undefined1 *)((int)param_1 + 0x151) = 1;
              uVar3 = (uStack_e8 & 0xff) + (uStack_e8 >> 8) & 0xffff;
              uVar7 = (undefined1)uVar3;
              if (*(byte *)(param_1 + 0x27) != 0) {
                uVar4 = 0;
                do {
                  if (uVar4 != 1) {
                    uVar3 = uVar3 + *(byte *)((int)&uStack_e4 + uVar4 + 1) & 0xffff;
                  }
                  uVar7 = (undefined1)uVar3;
                  uVar4 = uVar4 + 1;
                } while (*(byte *)(param_1 + 0x27) != uVar4);
              }
              uStack_e4._3_1_ = (undefined1)((uint)param_1[0x27] >> 0x18);
              uStack_e4._0_3_ =
                   CONCAT12(uVar7,CONCAT11(*(byte *)((int)param_1 + 0x9d) & 8 |
                                           ((char)param_1[0x53] + '\x01') * '\x10',
                                           (char)param_1[0x27]));
              uStack_d9 = (undefined1)((uint)iVar10 >> 0x18);
              uStack_dc = (uint3)(ushort)iVar10;
              uStack_d0._3_1_ = (undefined1)((uint)iVar2 >> 0x18);
              uStack_d0._0_3_ = CONCAT12(2,(short)iVar2);
              param_1[0x35] = uStack_d0;
              param_1[0x32] = _uStack_dc;
              param_1[0x36] = param_1[0x2d];
              param_1[0x37] = param_1[0x2e];
              param_1[0x33] = 0;
              param_1[0x30] = uStack_e4;
              param_1[0x2f] = uStack_e8;
              param_1[0x31] = param_1[0x28];
              param_1[0x34] = param_1[0x2b];
              iStack_d8 = 0;
              iVar2 = FUN_ram_4805cb5e(*param_1,param_1 + 0x2f,1,2,2,1,param_3 + 100000,0xf,
                                       param_1 + 0x4e,0x80,0x80,1,0,0);
              if (iVar2 == 0) {
                *(undefined1 *)((int)param_1 + 0x155) = 1;
                *(char *)((int)param_1 + 0x14d) = *(char *)((int)param_1 + 0x14d) + '\x01';
                iVar2 = FUN_ram_48025ba6();
                param_1[0x52] = iVar2;
              }
            }
          }
        }
      }
    }
  }
  else if (*(char *)((int)param_1 + 0x151) == '\0') {
    if (((((char)param_1[0x21] != '\0') && (param_1[0x23] != 0)) && (param_1[0x24] == param_1[10]))
       && (*(short *)((int)param_1 + 0x86) == *(short *)((int)param_1 + 0x4e))) {
      iVar10 = FUN_ram_480579a8(param_1 + 1,param_2);
      if (((((iVar10 != 0) && (*(char *)((int)param_1 + 0x7f) == '\0')) &&
           ((*(char *)((int)param_1 + 0x75) == '\0' || (*(char *)((int)param_1 + 0x82) != '\0'))))
          && ((((char)param_1[4] == '\0' || (*(char *)((int)param_1 + 0x11) != '\0')) ||
              (*(char *)((int)param_1 + 0x82) != '\0')))) &&
         ((*(char *)((int)param_1 + 0x95) == '\0' ||
          (((char)param_1[0x19] != '\0' &&
           (*(ushort *)((int)param_1 + 0x5e) <= *(ushort *)(param_1 + 0x22))))))) {
        if ((char)param_1[0x25] == '\0') {
          return;
        }
        if (((*(char *)((int)param_1 + 0x66) != '\0') && (*(char *)((int)param_1 + 0x67) != '\0'))
           && ((uint)(param_2 - param_1[0x15]) < 0x1f5)) {
          uVar3 = FUN_ram_4805777e(param_1 + 1);
          uVar1 = *(ushort *)(param_1 + 0x22);
          iVar10 = 100000;
          if (*(char *)((int)param_1 + 0x73) != '\0') {
            iVar10 = 0x274a6;
          }
          iVar9 = param_1[0x16] * 1000;
          uVar5 = iVar9 - 1;
          uVar4 = uVar5 + iVar10;
          uVar11 = __udivdi3(uVar4,((int)((ulonglong)(uint)param_1[0x16] * 1000 >> 0x20) -
                                   (uint)(iVar9 == 0)) + (uint)(uVar4 < uVar5),iVar10,0);
          uVar4 = (uint)uVar11;
          if (((int)((ulonglong)uVar11 >> 0x20) != 0) || (0xff < uVar4)) {
            uVar4 = 0xff;
          }
          uVar5 = uVar4 << 1;
          if ((uVar4 & 0x7fff) << 1 < uVar3) {
            uVar5 = uVar3;
          }
          if ((uVar5 & 0xffff) <= (uint)uVar1) {
            return;
          }
        }
      }
    }
    FUN_ram_480dce8c(*param_1,iVar2);
    return;
  }
  return;
}


