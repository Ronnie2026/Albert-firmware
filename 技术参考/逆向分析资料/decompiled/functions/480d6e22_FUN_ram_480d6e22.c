/* Firmware entry: 0x480d6e22 */

void FUN_ram_480d6e22(int param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  char *__s;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  int iVar16;
  undefined4 local_140 [12];
  char cStack_110;
  char cStack_10f;
  char cStack_10e;
  char cStack_10d;
  char cStack_10c;
  char cStack_10b;
  char cStack_10a;
  char cStack_109;
  char cStack_108;
  undefined1 auStack_104 [36];
  int iStack_e0;
  uint uStack_dc;
  char cStack_d5;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  char cStack_c0;
  char cStack_bf;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = *(char **)(param_1 + 0x710);
  if (__s != (char *)0x0) {
    pcVar11 = __s + 0x7400;
    do {
      cVar15 = *__s;
      if ((((cVar15 != '\0') && (__s[1] == '\0')) && (*(int *)(__s + 8) == 0)) &&
         (((iVar9 = *(int *)(param_2 + 4), *(int *)(__s + 4) == iVar9 &&
           (((*(uint *)(__s + 0x10) ^ *(uint *)(param_2 + 0x18)) & 0xffff) == 0)) &&
          ((*(int *)(__s + 0x18) == *(int *)(param_2 + 0x20) &&
           (*(int *)(__s + 0x1c) == *(int *)(param_2 + 0x24))))))) {
        bVar1 = __s[0x45];
        iVar16 = *(int *)(__s + 0x48);
        iVar8 = *(int *)(__s + 0x4c);
        puVar4 = local_140;
        pcVar11 = __s + 0x60;
        do {
          pcVar12 = pcVar11;
          puVar10 = puVar4;
          uVar14 = *(undefined4 *)(pcVar12 + 4);
          uVar13 = *(undefined4 *)(pcVar12 + 8);
          uVar5 = *(undefined4 *)(pcVar12 + 0xc);
          *puVar10 = *(undefined4 *)pcVar12;
          puVar10[1] = uVar14;
          puVar10[2] = uVar13;
          puVar10[3] = uVar5;
          pcVar11 = pcVar12 + 0x10;
          puVar4 = puVar10 + 4;
        } while (pcVar11 != __s + 0xe0);
        uVar5 = *(undefined4 *)(pcVar12 + 0x14);
        iVar6 = *(int *)(param_1 + 0x640);
        puVar10[4] = *(undefined4 *)pcVar11;
        puVar10[5] = uVar5;
        iVar7 = *(int *)(param_1 + 0x50c);
        if (((iVar9 == iVar6) && (*(int *)(param_1 + 0x66c) == iVar16)) &&
           (*(int *)(param_1 + 0x670) == iVar8)) {
          if (*(int *)(param_1 + 0x514) == iVar8) {
            bVar2 = iVar7 == iVar16;
            bVar3 = iVar16 != 0;
            if (((byte)(*param_2 - 1U) < 2) || (*(undefined **)param_2 == &vsie)) {
              if (bVar3 && bVar2) {
                if (cStack_108 == '\x02') {
                  iVar9 = *(int *)(param_1 + 0x518);
                  *(undefined2 *)(param_1 + 0x73a) = 0;
                }
                else {
                  iVar9 = *(int *)(param_1 + 0x518);
                }
                bVar2 = bVar3 && bVar2;
                if (iVar9 != 0) goto LAB_ram_480d6f16;
                goto LAB_ram_480d6fcc;
              }
            }
            else if (bVar3 && bVar2) {
              uVar5 = FUN_ram_48025ba6();
              if ((((bVar1 & 1) == 0) ||
                  (((((cStack_c0 != '\0' && (iStack_d0 == *(int *)(param_1 + 0x714))) &&
                     (*(char *)(param_1 + 0x1e4) != '\0')) &&
                    ((cStack_110 == *(char *)(param_1 + 0x1e7) &&
                     (cStack_10f == *(char *)(param_1 + 0x1e8))))) &&
                   (cStack_10e == *(char *)(param_1 + 0x1e9))))) &&
                 (((bVar1 & 2) == 0 ||
                  ((((cStack_bf != '\0' && (iStack_cc == *(int *)(param_1 + 0x718))) &&
                    ((*(char *)(param_1 + 0x284) != '\0' &&
                     (((cStack_10d == *(char *)(param_1 + 0x28b) &&
                       (cStack_10c == *(char *)(param_1 + 0x28c))) &&
                      (cStack_10b == *(char *)(param_1 + 0x28d))))))) &&
                   ((cStack_10a == *(char *)(param_1 + 0x28e) &&
                    (cStack_109 == *(char *)(param_1 + 0x28f))))))))) {
                if ((bVar1 & 4) == 0) goto LAB_ram_480d71ba;
                if (cStack_108 != '\0') {
                  if (((iStack_c8 != *(int *)(param_1 + 0x71c)) ||
                      (FUN_ram_4804a1e6(&uStack_b8,param_1 + 0x2b8,uVar5), iStack_c4 != uStack_7c))
                     || ((*(char *)(param_1 + 0x764) != cStack_108 ||
                         (((iStack_e0 != *(int *)(param_1 + 0x78c) ||
                           (((uStack_dc ^ *(uint *)(param_1 + 0x790)) & 0xffff) != 0)) ||
                          (cStack_d5 != *(char *)(param_1 + 0x797))))))) goto LAB_ram_480d70ce;
                  if (*(char *)(param_1 + 0x764) != '\x01') {
LAB_ram_480d71ba:
                    uVar5 = FUN_ram_48025ba6();
                    FUN_ram_480d6386(param_1,param_2,uVar5);
                    return;
                  }
                  iVar9 = FUN_ram_480d632e(auStack_104,param_1 + 0x768);
                  if (((iVar9 != 0) && (*(char *)(param_1 + 0x3e0) != '\0')) &&
                     (*(int *)(param_1 + 0x3e4) == 0)) {
                    uStack_b8 = *(undefined4 *)(param_1 + 0x3bc);
                    uStack_b4 = *(undefined4 *)(param_1 + 0x3c0);
                    uStack_b0 = *(undefined4 *)(param_1 + 0x3c4);
                    uStack_ac = *(undefined4 *)(param_1 + 0x3c8);
                    uStack_a8 = *(undefined4 *)(param_1 + 0x3cc);
                    uStack_a4 = *(undefined4 *)(param_1 + 0x3d0);
                    uStack_a0 = *(undefined4 *)(param_1 + 0x3d4);
                    uStack_9c = *(undefined4 *)(param_1 + 0x3d8);
                    uStack_98 = *(undefined4 *)(param_1 + 0x3dc);
                    iVar9 = FUN_ram_480d632e(auStack_104,&uStack_b8);
                    if (iVar9 != 0) goto LAB_ram_480d71ba;
                  }
                }
              }
              else {
LAB_ram_480d70ce:
                if (cStack_108 == '\x02') {
                  *(undefined2 *)(param_1 + 0x73a) = 0;
                }
              }
              if (*(int *)(param_1 + 0x518) != 0) goto LAB_ram_480d6f16;
              iVar7 = *(int *)(param_1 + 0x50c);
              cVar15 = bVar3 && bVar2;
              goto joined_r0x480d6fc8;
            }
          }
          if (cStack_108 == '\x02') {
            *(undefined2 *)(param_1 + 0x73a) = 0;
          }
        }
        else {
          cVar15 = false;
          if (*(int *)(param_1 + 0x514) != iVar8) goto LAB_ram_480d6f16;
          if (iVar16 == 0 || iVar7 != iVar16) {
            cVar15 = '\0';
            goto LAB_ram_480d6f16;
          }
          if ((*(int *)(param_1 + 0x518) != 0) || (iVar16 == 0)) goto LAB_ram_480d6f16;
joined_r0x480d6fc8:
          bVar2 = (bool)cVar15;
          if (iVar7 != iVar16) goto LAB_ram_480d6f16;
LAB_ram_480d6fcc:
          cVar15 = bVar2;
          if (*(int *)(param_1 + 0x510) != iVar16) {
            *(int *)(param_1 + 0x510) = iVar16;
          }
        }
LAB_ram_480d6f16:
        memset(__s,0,0xe8);
        uStack_b0 = 0;
        uStack_ac = 0;
        __s[0x20] = '\0';
        __s[0x21] = '\0';
        __s[0x22] = '\0';
        __s[0x23] = '\0';
        __s[0x28] = '\0';
        __s[0x29] = '\0';
        __s[0x2a] = '\0';
        __s[0x2b] = '\0';
        __s[0x2c] = '\0';
        __s[0x2d] = '\0';
        __s[0x2e] = '\0';
        __s[0x2f] = '\0';
        __s[0x30] = '\0';
        __s[0x31] = '\0';
        __s[0x32] = '\0';
        __s[0x33] = '\0';
        __s[0x34] = '\0';
        __s[0x35] = '\0';
        __s[0x36] = '\0';
        __s[0x37] = '\0';
        __s[0x3c] = '\0';
        __s[0x3d] = '\0';
        __s[0x3e] = '\0';
        __s[0x3f] = '\0';
        __s[0x40] = '\0';
        __s[0x41] = '\0';
        __s[0x42] = '\0';
        __s[0x43] = '\0';
        __s[0x11] = -1;
        uStack_b4 = 8;
        __s[0x24] = '\b';
        __s[0x25] = '\0';
        __s[0x26] = '\0';
        __s[0x27] = '\0';
        __s[0x60] = '\b';
        __s[0x70] = '\b';
        __s[0x80] = '\b';
        __s[0x38] = '\0';
        __s[0x39] = '\0';
        __s[0x3a] = '\x01';
        __s[0x3b] = '\0';
        uStack_a0 = 0x10000;
        if (cVar15 != '\0') {
          *(undefined4 *)(param_1 + 0x640) = 0;
          uStack_b8 = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          uStack_9c = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = (uint)uStack_7c._2_2_ << 0x10;
          FUN_ram_4ff45158(param_1 + 0x644,&uStack_b8,0x3e);
          memset(&uStack_b8,0,0x88);
          uStack_b8 = CONCAT31(uStack_b8._1_3_,8);
          uStack_a8 = CONCAT31(uStack_a8._1_3_,8);
          uStack_98 = CONCAT31(uStack_98._1_3_,8);
          FUN_ram_4ff45158(param_1 + 0x688,&uStack_b8,0x82);
        }
        return;
      }
      __s = __s + 0xe8;
    } while (pcVar11 != __s);
  }
  return;
}


