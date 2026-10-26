/* Firmware entry: 0x480eb56e */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_api_can_experiment_start_480eb56e(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  char ****ppppcVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  char ****__s;
  int iVar16;
  ulonglong uVar17;
  undefined1 uStack_195;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  char *apcStack_184 [2];
  uint uStack_17c;
  byte bStack_175;
  undefined1 auStack_174 [16];
  char ***pppcStack_164;
  undefined1 uStack_160;
  int iStack_15c;
  undefined4 uStack_158;
  undefined2 auStack_134 [4];
  undefined1 uStack_12b;
  undefined1 uStack_128;
  undefined2 uStack_122;
  undefined1 uStack_114;
  char **appcStack_74 [22];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6ded0 != (code *)0x0) && (iVar5 = (*DAT_ram_4ff6ded0)(), iVar5 == 0)) {
    FUN_ram_48066698(DAT_ram_4ff6ded8,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"can_experiment_quiesced\"}",0x2e);
    return;
  }
  FUN_ram_4802a8a8(auStack_174,"confirmedGeneration");
  iVar14 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
  iVar5 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar14;
  if (*(int *)(iVar5 + 0x1cc4) != 0) {
    puVar3 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar14 + 0xcc4);
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      iVar6 = FUN_ram_4802b18e(auStack_174,*puVar3);
      iVar14 = DAT_ram_4ff6ded8;
      if (iVar6 != 0) {
        iVar5 = FUN_ram_4802b18e(auStack_174,"plain");
        if ((iVar5 == 0) ||
           (iVar5 = *(int *)(iVar14 + 0x4c) + *(int *)(iVar14 + 0x40) * 0x1d40,
           *(char *)(iVar5 + 0xcc2) == '\0')) {
          iVar6 = *(int *)(iVar14 + 0x40);
          iVar5 = iVar6 * 0x1d40;
          iVar16 = *(int *)(iVar14 + 0x4c);
          iVar14 = iVar16 + iVar5;
          if (*(int *)(iVar14 + 0x1cc4) == 0) goto LAB_ram_480eb808;
          puVar3 = (undefined4 *)(iVar5 + 0xcc4 + iVar16);
          uVar4 = 0;
          goto LAB_ram_480eb7ae;
        }
        puVar10 = *(undefined1 **)(iVar5 + 0x43c);
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(&pppcStack_164,puVar10,*(undefined4 *)(iVar5 + 0x438));
        goto joined_r0x480eb7e4;
      }
      puVar3 = puVar3 + 2;
    } while (uVar4 < *(uint *)(iVar5 + 0x1cc4));
  }
  FUN_ram_4802a59e(auStack_174);
  goto LAB_ram_480eb75e;
  while( true ) {
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 2;
    if (*(uint *)(iVar14 + 0x1cc4) <= uVar4) break;
LAB_ram_480eb7ae:
    iVar5 = FUN_ram_4802b18e(auStack_174,*puVar3);
    if (iVar5 != 0) {
      FUN_ram_4802a8a8(&pppcStack_164,*(undefined4 *)(iVar16 + (iVar6 * 0x3a8 + uVar4) * 8 + 0xcc8))
      ;
      goto joined_r0x480eb7e4;
    }
  }
LAB_ram_480eb808:
  FUN_ram_4802a8a8(&pppcStack_164,&DAT_ram_481df390);
joined_r0x480eb7e4:
  if ((char)uStack_158._3_1_ < '\0') {
    ppppcVar11 = &pppcStack_164;
    if ((uStack_158._3_1_ & 0x7f) != 0) goto LAB_ram_480eb646;
  }
  else if (((char ****)pppcStack_164 != (char ****)0x0) &&
          (ppppcVar11 = (char ****)pppcStack_164, iStack_15c != 0)) {
LAB_ram_480eb646:
    __s = &pppcStack_164;
    apcStack_184[0] = (char *)0x0;
    uVar7 = strtoul((char *)ppppcVar11,apcStack_184,10);
    if ((apcStack_184[0] != (char *)0x0) && (*apcStack_184[0] == '\0')) {
      FUN_ram_4802a59e(__s);
      FUN_ram_4802a59e(auStack_174);
      memset(__s,0,0x144);
      uStack_160 = 1;
      uStack_12b = 1;
      auStack_134[0] = 100;
      uStack_128 = 0xff;
      uStack_114 = 0xff;
      uStack_122 = 0xff1d;
      ppppcVar11 = __s;
      do {
        *(undefined1 *)(ppppcVar11 + 0x15) = 1;
        *(undefined2 *)(ppppcVar11 + 0x20) = 100;
        *(undefined1 *)((int)ppppcVar11 + 0x89) = 1;
        *(undefined1 *)(ppppcVar11 + 0x23) = 0xff;
        *(undefined2 *)((int)ppppcVar11 + 0x92) = 0xff1d;
        *(undefined1 *)(ppppcVar11 + 0x28) = 0xff;
        ppppcVar11 = ppppcVar11 + 0x14;
      } while (ppppcVar11 != (char ****)appcStack_74);
      uStack_195 = 0;
      iVar5 = FUN_ram_48088676(__s,&uStack_195);
      if (iVar5 == 0) {
LAB_ram_480eb708:
        uVar17 = CONCAT44(uStack_194._4_4_,(undefined4)uStack_194);
        uStack_194._1_1_ = 0xf;
        uStack_18c = CONCAT44(uStack_18c._4_4_,(undefined4)uStack_18c);
      }
      else {
        FUN_ram_4ff3ec14(&DAT_ram_4ff48d94,0xffffffff);
        if (((uVar7 == 0) || (uVar7 != DAT_ram_4ff48ee4)) ||
           (uVar4 = (uint)pppcStack_164 & 0xff, DAT_ram_4ff48ee8 != uVar4)) {
LAB_ram_480eb6fc:
          FUN_ram_4ff3ee10(&DAT_ram_4ff48d94);
          goto LAB_ram_480eb708;
        }
        if (uVar4 != 0) {
          puVar15 = &DAT_ram_4ff48d94;
          uVar13 = 0;
          do {
            if ((puVar15[0x158] != *(char *)(__s + 1)) || (*(char ****)(puVar15 + 0x15c) != __s[2]))
            goto LAB_ram_480eb6fc;
            if ((((((*(uint *)(&DAT_ram_4ff48ef4 + uVar13 * 0x28) ^ (&uStack_158)[uVar13 * 0x14]) &
                   0xffff) != 0) ||
                 ((puVar15[0x182] != *(char *)((int)__s + 0x2e) ||
                  ((&DAT_ram_4ff48f18)[uVar13 * 0x14] != *(int *)(auStack_134 + uVar13 * 0x28)))))
                || (puVar15[0x188] != *(char *)(__s + 0xd))) ||
               (((puVar15[0x19c] != *(char *)(__s + 0x12) ||
                 (*(char ****)(puVar15 + 0x1a0) != __s[0x13])) ||
                (puVar15[0x1a4] != *(char *)(__s + 0x14))))) goto LAB_ram_480eb6fc;
            ppppcVar11 = __s;
            puVar12 = puVar15;
            do {
              if (((puVar12[0x162] != *(char *)((int)ppppcVar11 + 0xe)) ||
                  (puVar12[0x16a] != *(char *)((int)ppppcVar11 + 0x16))) ||
                 (puVar12[0x172] != *(char *)((int)ppppcVar11 + 0x1e))) goto LAB_ram_480eb6fc;
              pcVar1 = puVar12 + 0x17a;
              pcVar2 = (char *)((int)ppppcVar11 + 0x26);
              puVar12 = puVar12 + 1;
              ppppcVar11 = (char ****)((int)ppppcVar11 + 1);
              if (*pcVar1 != *pcVar2) goto LAB_ram_480eb6fc;
            } while (puVar12 != puVar15 + 8);
            if ((((puVar15[0x189] != *(char *)((int)__s + 0x35)) ||
                 (puVar15[0x18a] != *(char *)((int)__s + 0x36))) ||
                ((puVar15[0x18b] != *(char *)((int)__s + 0x37) ||
                 ((((puVar15[0x18c] != *(char *)(__s + 0xe) ||
                    (puVar15[0x18d] != *(char *)((int)__s + 0x39))) ||
                   (puVar15[0x18e] != *(char *)((int)__s + 0x3a))) ||
                  ((puVar15[399] != *(char *)((int)__s + 0x3b) ||
                   (puVar15[400] != *(char *)(__s + 0xf))))))))) ||
               (((puVar15[0x191] != *(char *)((int)__s + 0x3d) ||
                 ((puVar15[0x192] != *(char *)((int)__s + 0x3e) ||
                  (puVar15[0x193] != *(char *)((int)__s + 0x3f))))) ||
                (((puVar15[0x194] != *(char *)(__s + 0x10) ||
                  (((puVar15[0x195] != *(char *)((int)__s + 0x41) ||
                    (puVar15[0x196] != *(char *)((int)__s + 0x42))) ||
                   (puVar15[0x197] != *(char *)((int)__s + 0x43))))) ||
                 ((((puVar15[0x198] != *(char *)(__s + 0x11) ||
                    (puVar15[0x199] != *(char *)((int)__s + 0x45))) ||
                   (puVar15[0x19a] != *(char *)((int)__s + 0x46))) ||
                  (puVar15[0x19b] != *(char *)((int)__s + 0x47))))))))) goto LAB_ram_480eb6fc;
            uVar13 = uVar13 + 1;
            puVar15 = puVar15 + 0x50;
            __s = __s + 0x14;
          } while ((uVar13 & 0xff) < uVar4);
        }
        FUN_ram_4ff3ee10(&DAT_ram_4ff48d94);
        uVar17 = FUN_ram_480ead1c(&DAT_ram_4ff48d94,uVar7,&DAT_ram_4ff60e20);
        uStack_18c = uVar17;
        if ((uVar17 & 0xff) != 0) {
          uStack_194 = uVar17;
          FUN_ram_4802a8a8(apcStack_184,&DAT_ram_481c4164);
          FUN_ram_480881e0(apcStack_184,&DAT_ram_481c4274);
          FUN_ram_4802af2c(apcStack_184,&DAT_ram_481c3dec);
          uVar8 = uStack_194._4_4_;
          if ((char)bStack_175 < '\0') {
            uStack_17c = bStack_175 & 0x7f;
            if ((bStack_175 & 0x7f) != 0) goto LAB_ram_480eba5e;
          }
          else if ((apcStack_184[0] != (char *)0x0) && (uStack_17c != 0)) {
LAB_ram_480eba5e:
            pbVar9 = (byte *)FUN_ram_4802b206(apcStack_184,uStack_17c - 1);
            if ((*pbVar9 & 0xdf) == 0x5b) goto LAB_ram_480eba80;
          }
          FUN_ram_4802af5a(apcStack_184,0x2c);
LAB_ram_480eba80:
          FUN_ram_4802af5a(apcStack_184,0x22);
          FUN_ram_4802af2c(apcStack_184,"generation");
          FUN_ram_4802af2c(apcStack_184,&DAT_ram_481c67c4);
          FUN_ram_4802aa44(auStack_174,uVar8,10);
          FUN_ram_4802ae48(apcStack_184,auStack_174);
          FUN_ram_4802a59e(auStack_174);
          FUN_ram_4802af5a(apcStack_184,0x7d);
          FUN_ram_4806acb0(DAT_ram_4ff6ded8,200,"application/json",apcStack_184);
          FUN_ram_4802a59e(apcStack_184);
          return;
        }
        uStack_194._1_1_ = (undefined1)(uVar17 >> 8);
      }
      uVar8 = 0x199;
      goto LAB_ram_480eb718;
    }
  }
  FUN_ram_4802a59e(&pppcStack_164);
  FUN_ram_4802a59e(auStack_174);
LAB_ram_480eb75e:
  uVar17 = CONCAT44(uStack_194._4_4_,(undefined4)uStack_194);
  uStack_194._1_1_ = 0xf;
  uVar8 = 400;
LAB_ram_480eb718:
  FUN_ram_4808999a(uVar8,uStack_194._1_1_,0);
  uStack_194 = uVar17;
  return;
}


