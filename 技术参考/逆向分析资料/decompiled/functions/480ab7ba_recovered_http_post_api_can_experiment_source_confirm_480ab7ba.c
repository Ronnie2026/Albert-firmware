/* Firmware entry: 0x480ab7ba */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_api_can_experiment_source_confirm_480ab7ba(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char ***__nptr;
  ulong uVar5;
  byte *pbVar6;
  undefined1 extraout_a1;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_48;
  undefined1 uStack_44;
  char *pcStack_40;
  undefined1 uStack_3c;
  char **appcStack_30 [2];
  uint uStack_28;
  byte bStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6ded0 != (code *)0x0) && (iVar3 = (*DAT_ram_4ff6ded0)(), iVar3 == 0)) {
    FUN_ram_48066698(DAT_ram_4ff6ded8,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"can_experiment_quiesced\"}",0x2e);
    return;
  }
  FUN_ram_4802a8a8(&pcStack_40,&DAT_ram_481cc4b8);
  iVar8 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
  iVar3 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar8;
  if (*(int *)(iVar3 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar8 + 0xcc4);
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      iVar4 = FUN_ram_4802b18e(&pcStack_40,*puVar1);
      iVar8 = DAT_ram_4ff6ded8;
      if (iVar4 != 0) {
        iVar3 = FUN_ram_4802b18e(&pcStack_40,"plain");
        if ((iVar3 == 0) ||
           (iVar3 = *(int *)(iVar8 + 0x4c) + *(int *)(iVar8 + 0x40) * 0x1d40,
           *(char *)(iVar3 + 0xcc2) == '\0')) {
          iVar4 = *(int *)(iVar8 + 0x40);
          iVar3 = iVar4 * 0x1d40;
          iVar9 = *(int *)(iVar8 + 0x4c);
          iVar8 = iVar9 + iVar3;
          if (*(int *)(iVar8 + 0x1cc4) == 0) goto LAB_ram_480abae4;
          puVar1 = (undefined4 *)(iVar3 + 0xcc4 + iVar9);
          uVar2 = 0;
          goto LAB_ram_480aba58;
        }
        puVar7 = *(undefined1 **)(iVar3 + 0x43c);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(appcStack_30,puVar7,*(undefined4 *)(iVar3 + 0x438));
        goto joined_r0x480aba8a;
      }
      puVar1 = puVar1 + 2;
    } while (uVar2 < *(uint *)(iVar3 + 0x1cc4));
  }
  FUN_ram_4802a59e(&pcStack_40);
  goto LAB_ram_480aba02;
  while( true ) {
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 2;
    if (*(uint *)(iVar8 + 0x1cc4) <= uVar2) break;
LAB_ram_480aba58:
    iVar3 = FUN_ram_4802b18e(&pcStack_40,*puVar1);
    if (iVar3 != 0) {
      FUN_ram_4802a8a8(appcStack_30,*(undefined4 *)(iVar9 + (iVar4 * 0x3a8 + uVar2) * 8 + 0xcc8));
      goto joined_r0x480aba8a;
    }
  }
LAB_ram_480abae4:
  FUN_ram_4802a8a8(appcStack_30,&DAT_ram_481df390);
joined_r0x480aba8a:
  if ((char)bStack_21 < '\0') {
    __nptr = appcStack_30;
    if ((bStack_21 & 0x7f) != 0) goto LAB_ram_480ab88a;
  }
  else if (((char ***)appcStack_30[0] != (char ***)0x0) &&
          (__nptr = (char ***)appcStack_30[0], uStack_28 != 0)) {
LAB_ram_480ab88a:
    uStack_48 = (char *)0x0;
    uVar5 = strtoul((char *)__nptr,(char **)&uStack_48,10);
    if ((uStack_48 != (char *)0x0) && ((*uStack_48 == '\0' && (uVar5 < 4)))) {
      FUN_ram_4802a59e(appcStack_30);
      FUN_ram_4802a59e(&pcStack_40);
      uStack_48 = (char *)FUN_ram_4805ebaa(&DAT_ram_4ff48d94,uVar5 & 0xff);
      uStack_44 = extraout_a1;
      pcStack_40 = uStack_48;
      uStack_3c = extraout_a1;
      if (((uint)uStack_48 & 0xff) == 0) {
        FUN_ram_4808999a(0x199,(char)((uint)uStack_48 >> 8),(char)((uint)uStack_48 >> 0x18));
        return;
      }
      FUN_ram_4802a8a8(appcStack_30,&DAT_ram_481c4164);
      if ((char)bStack_21 < '\0') {
        uVar2 = bStack_21 & 0x7f;
        if ((bStack_21 & 0x7f) != 0) goto LAB_ram_480ab918;
      }
      else if (((char ***)appcStack_30[0] != (char ***)0x0) && (uVar2 = uStack_28, uStack_28 != 0))
      {
LAB_ram_480ab918:
        pbVar6 = (byte *)FUN_ram_4802b206(appcStack_30,uVar2 - 1);
        if ((*pbVar6 & 0xdf) == 0x5b) goto LAB_ram_480ab93a;
      }
      FUN_ram_4802af5a(appcStack_30,0x2c);
LAB_ram_480ab93a:
      FUN_ram_4802af5a(appcStack_30,0x22);
      FUN_ram_4802af2c(appcStack_30,&DAT_ram_481c4274);
      FUN_ram_4802af2c(appcStack_30,&DAT_ram_481c67c4);
      FUN_ram_4802af2c(appcStack_30,&DAT_ram_481c3dec);
      FUN_ram_480ab726(appcStack_30,&DAT_ram_481cc4b8,uStack_48._2_1_);
      FUN_ram_480ab726(appcStack_30,&DAT_ram_481caf98,uStack_44);
      FUN_ram_4802af5a(appcStack_30,0x7d);
      if ((char)bStack_21 < '\0') {
        uVar2 = bStack_21 & 0x7f;
        appcStack_30[0] = (char **)appcStack_30;
      }
      else {
        uVar2 = 0;
        if ((char ***)appcStack_30[0] != (char ***)0x0) {
          uVar2 = uStack_28;
        }
      }
      FUN_ram_48066698(DAT_ram_4ff6ded8,200,"application/json",appcStack_30[0],uVar2);
      FUN_ram_4802a59e(appcStack_30);
      return;
    }
  }
  FUN_ram_4802a59e(appcStack_30);
  FUN_ram_4802a59e(&pcStack_40);
LAB_ram_480aba02:
  FUN_ram_4808999a(400,1,0);
  return;
}


