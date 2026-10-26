/* Firmware entry: 0x480f2c14 */

/* WARNING: Type propagation algorithm not settling */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_wifi_ap_auto_off_480f2c14(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  undefined4 *****pppppuVar5;
  char *pcVar6;
  undefined4 ****ppppuVar7;
  int iVar8;
  undefined4 uStack_44;
  undefined4 *******pppppppuStack_40;
  undefined4 ***pppuStack_3c;
  undefined4 *****pppppuStack_38;
  undefined1 *puStack_34;
  undefined4 *******pppppppuStack_30;
  undefined1 *puStack_2c;
  undefined4 ***pppuStack_28;
  byte bStack_21;
  
  iVar2 = DAT_ram_4ff5cbe8;
  iVar3 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 == '\0') {
    iVar3 = FUN_ram_48036a9a("enabled",DAT_ram_4ff5c5f5);
    DAT_ram_4ff5c5f5 = (char)iVar3;
    if ((iVar3 == 0) || (iVar3 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118), iVar3 != 3)) {
      DAT_ram_4ff5c614 = 0;
    }
    else {
      iVar3 = FUN_ram_48025ba6();
      DAT_ram_4ff5c614 = iVar3 + 300000;
    }
    if (DAT_ram_4ff6de6e == '\0') {
      iVar3 = FUN_ram_480334d2();
      FUN_ram_4802a8a8(&pppppppuStack_30,"{\"ok\":");
    }
    else {
      DAT_ram_4ff5ca74 = DAT_ram_4ff5ca74 + 1;
      DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 0x20;
      DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
      iVar3 = FUN_ram_480ee046();
      FUN_ram_4802a8a8(&pppppppuStack_30,"{\"ok\":");
    }
    if (iVar3 == 0) {
      FUN_ram_4802af2c(&pppppppuStack_30,"false");
      FUN_ram_4802af2c(&pppppppuStack_30,",\"apAutoOffEnabled\":");
      if (DAT_ram_4ff5c5f5 == '\0') {
        pcVar6 = "false";
      }
      else {
        pcVar6 = "true";
      }
      FUN_ram_4802af2c(&pppppppuStack_30,pcVar6);
      FUN_ram_4802af5a(&pppppppuStack_30,0x7d);
      uStack_44 = 500;
      iVar3 = DAT_ram_4ff5cbdc;
      iVar2 = DAT_ram_4ff5cbe8;
      pppppppuStack_40 = pppppppuStack_30;
      pppuStack_3c = pppuStack_28;
    }
    else {
      FUN_ram_4802af2c(&pppppppuStack_30,&DAT_ram_481c3dec);
      FUN_ram_4802af2c(&pppppppuStack_30,",\"apAutoOffEnabled\":");
      pcVar6 = "true";
      if (DAT_ram_4ff5c5f5 == '\0') {
        pcVar6 = "false";
      }
      FUN_ram_4802af2c(&pppppppuStack_30,pcVar6);
      FUN_ram_4802af5a(&pppppppuStack_30,0x7d);
      uStack_44 = 200;
      iVar3 = DAT_ram_4ff5cbdc;
      iVar2 = DAT_ram_4ff5cbe8;
      pppppppuStack_40 = pppppppuStack_30;
      pppuStack_3c = pppuStack_28;
    }
    if ((char)bStack_21 < '\0') {
      pppppppuStack_40 = &pppppppuStack_30;
      pppuStack_3c = (undefined4 ***)(bStack_21 & 0x7f);
    }
    else if (pppppppuStack_40 == (undefined4 *******)0x0) {
      pppuStack_3c = (undefined4 ***)0x0;
    }
    cVar1 = *(char *)(iVar3 * 0x1d40 + iVar2 + 0x44c);
    DAT_ram_4ff5cbdc = iVar3;
    DAT_ram_4ff5cbe8 = iVar2;
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_44,&pppppppuStack_40,&pppuStack_3c);
        DAT_ram_4ff5cbc8 = '\0';
      }
      pppuVar4 = pppuStack_3c;
      if (pppuStack_3c == (undefined4 ***)0x0) {
        pppuVar4 = (undefined4 ***)0x1;
      }
      pppuVar4 = (undefined4 ***)FUN_ram_4ff206d8(pppuVar4,0x404);
      iVar8 = iVar2 + iVar3 * 0x1d40;
      *(undefined4 ****)(iVar8 + 0x1cdc) = pppuVar4;
      if (pppuVar4 == (undefined4 ***)0x0) {
        if (*(char *)(iVar8 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar2 + iVar3 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (pppuStack_3c != (undefined4 ***)0x0) {
          FUN_ram_4ff45158(pppuVar4,pppppppuStack_40,pppuStack_3c);
          pppuVar4 = *(undefined4 ****)(iVar8 + 0x1cdc);
        }
        ppppuVar7 = (undefined4 ****)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40);
        if ((*(char *)(ppppuVar7 + 0x113) != '\0') && (*(char *)(ppppuVar7 + 0x113) != '\x06')) {
          ppppuVar7[0x738] = pppuVar4;
          ppppuVar7[0x739] = pppuStack_3c;
          ppppuVar7[0x73a] = (undefined4 ***)0x0;
          puStack_34 = &LAB_ram_4802d3f2;
          pppppuStack_38 = (undefined4 *****)ppppuVar7;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_44,"application/json",ppppuVar7,
                           &LAB_ram_4802d3f2);
        }
      }
    }
    FUN_ram_4802a59e(&pppppppuStack_30);
    return;
  }
  pppuStack_3c = (undefined4 ***)0x481c791c;
  pppppppuStack_40 = (undefined4 *******)0x199;
  pppppuStack_38 = (undefined4 *****)0x1f;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == '\x06') {
    return;
  }
  pppppuVar5 = (undefined4 *****)0x1f;
  if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
    DAT_ram_4ff5cbc8 = 1;
    (*DAT_ram_4ff5cbc4)(&pppppppuStack_40,&pppuStack_3c,&pppppuStack_38);
    DAT_ram_4ff5cbc8 = '\0';
    pppppuVar5 = pppppuStack_38;
    if (pppppuStack_38 == (undefined4 *****)0x0) {
      pppppuVar5 = (undefined4 *****)0x1;
    }
  }
  pppppuVar5 = (undefined4 *****)FUN_ram_4ff206d8(pppppuVar5,0x404);
  iVar8 = iVar2 + iVar3 * 0x1d40;
  *(undefined4 ******)(iVar8 + 0x1cdc) = pppppuVar5;
  if (pppppuVar5 != (undefined4 *****)0x0) {
    if (pppppuStack_38 != (undefined4 *****)0x0) {
      FUN_ram_4ff45158(pppppuVar5,pppuStack_3c,pppppuStack_38);
      pppppuVar5 = *(undefined4 ******)(iVar8 + 0x1cdc);
    }
    pppppppuStack_30 = (undefined4 *******)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40);
    if ((*(char *)(pppppppuStack_30 + 0x113) != '\0') &&
       (*(char *)(pppppppuStack_30 + 0x113) != '\x06')) {
      pppppppuStack_30[0x738] = (undefined4 ******)pppppuVar5;
      pppppppuStack_30[0x739] = (undefined4 ******)pppppuStack_38;
      pppppppuStack_30[0x73a] = (undefined4 ******)0x0;
      puStack_2c = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,pppppppuStack_40,"application/json",pppppppuStack_30,
                       &LAB_ram_4802d3f2);
      return;
    }
    return;
  }
  if (*(char *)(iVar8 + 0x44c) != '\0') {
    FUN_ram_48065e9c(iVar2 + iVar3 * 0x1d40 + 0x1c,7);
    return;
  }
  return;
}


