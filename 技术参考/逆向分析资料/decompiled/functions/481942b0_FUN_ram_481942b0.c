/* Firmware entry: 0x481942b0 */

undefined4
FUN_ram_481942b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                undefined4 param_6,uint *param_7)

{
  char cVar1;
  uint __n;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  uint *__s;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  size_t sVar12;
  int iVar13;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 auStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_3c = 0;
  if (param_1 == 0) {
    piVar3 = (int *)FUN_ram_481946a6();
    if (piVar3 == (int *)0x0) goto LAB_ram_4819467a;
    iVar2 = *piVar3;
  }
  else {
    iVar13 = *(int *)(param_1 + 0x70);
    piVar3 = (int *)FUN_ram_481946a6();
    if (piVar3 == (int *)0x0) {
LAB_ram_4819467a:
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"ESP_RSA_SIGN_ALT","E (%lu) %s: Digital signature data context is NULL\n",
                       uVar4,"ESP_RSA_SIGN_ALT");
      return 0xffffffff;
    }
    iVar2 = *piVar3;
    if (iVar13 == 1) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"ESP_RSA_SIGN_ALT",
                       "E (%lu) %s: RSA PKCS#1 v2.1 padding is not supported. Please enable CONFIG_MBEDTLS_SSL_PROTO_TLS1_3\n"
                       ,uVar4,"ESP_RSA_SIGN_ALT");
      return 0xffffffff;
    }
  }
  iVar2 = iVar2 + 1;
  __n = iVar2 * 4;
  iStack_38 = 0;
  auStack_34[0] = 0;
  if (param_4 == 0) {
    if ((param_5 <= __n) && (10 < __n - param_5)) {
      sVar12 = (__n - param_5) - 3;
      *(undefined1 *)param_7 = 0;
      *(undefined1 *)((int)param_7 + 1) = 1;
      pvVar5 = memset((undefined1 *)((int)param_7 + 2),0xff,sVar12);
      puVar6 = (undefined1 *)((int)pvVar5 + sVar12);
      *puVar6 = 0;
      FUN_ram_4ff45158(puVar6 + 1,param_6,param_5);
LAB_ram_4819436c:
      __s = (uint *)FUN_ram_4ff20824(__n,2,0x802,0x1800);
      if (__s == (uint *)0x0) {
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"ESP_RSA_SIGN_ALT",
                         "E (%lu) %s: Could not allocate memory for internal DS operations\n",uVar4,
                         "ESP_RSA_SIGN_ALT");
        return 0xffffffff;
      }
      puVar10 = param_7 + iVar2;
      puVar9 = __s;
      if (iVar2 != 0) {
        do {
          uVar11 = puVar10[-1];
          puVar10 = puVar10 + -1;
          *puVar9 = (uVar11 & 0xff00) << 8 | uVar11 >> 0x18 | uVar11 << 0x18 | uVar11 >> 8 & 0xff00;
          puVar9 = puVar9 + 1;
        } while (param_7 != puVar10);
      }
      uVar4 = FUN_ram_481946b0();
      iVar13 = FUN_ram_48194a02(__s,piVar3,uVar4,&uStack_3c);
      if (iVar13 == 0) {
        iVar13 = FUN_ram_48194bbc(__s,uStack_3c);
        if (iVar13 == 0) {
          puVar9 = __s + iVar2;
          if (iVar2 != 0) {
            do {
              uVar11 = puVar9[-1];
              puVar9 = puVar9 + -1;
              *param_7 = (uVar11 & 0xff00) << 8 |
                         uVar11 >> 0x18 | uVar11 << 0x18 | uVar11 >> 8 & 0xff00;
              param_7 = param_7 + 1;
            } while (__s != puVar9);
          }
          memset(__s,0,__n);
          FUN_ram_4ff209c6(__s);
          return 0;
        }
        if (iVar13 == 0xc004) {
          uVar4 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"ESP_RSA_SIGN_ALT",
                           "E (%lu) %s: Invalid digest in DS data reported by esp_ds_finish_sign\n",
                           uVar4,"ESP_RSA_SIGN_ALT");
        }
        else {
          uVar4 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"ESP_RSA_SIGN_ALT",
                           "E (%lu) %s: Error in esp_ds_finish_sign, returned %d \n",uVar4,
                           "ESP_RSA_SIGN_ALT",iVar13);
        }
        memset(__s,0,__n);
        FUN_ram_4ff209c6(__s);
        return 0xffffffff;
      }
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"ESP_RSA_SIGN_ALT","E (%lu) %s: Error in esp_ds_start_sign, returned %d \n"
                       ,uVar4,"ESP_RSA_SIGN_ALT",iVar13);
      memset(__s,0,__n);
      FUN_ram_4ff209c6(__s);
      return 0xffffffff;
    }
  }
  else {
    iVar13 = FUN_ram_4817697e(param_4);
    if ((iVar13 != 0) && (iVar7 = FUN_ram_481852a4(param_4,auStack_34,&iStack_38), iVar7 == 0)) {
      iVar13 = FUN_ram_48176d4c(iVar13);
      iVar7 = iStack_38 + iVar13;
      if ((iVar7 + 8U < 0x80) &&
         (((iVar13 + 10U <= iVar7 + 10U && (iVar7 + 10U <= __n)) &&
          (uVar11 = (__n - 10) - iVar7, 10 < uVar11)))) {
        sVar12 = uVar11 - 3;
        *(undefined1 *)((int)param_7 + 1) = 1;
        *(undefined1 *)param_7 = 0;
        pvVar5 = memset((undefined1 *)((int)param_7 + 2),0xff,sVar12);
        iVar7 = iStack_38;
        puVar6 = (undefined1 *)((int)pvVar5 + sVar12);
        puVar6[1] = 0x30;
        *puVar6 = 0;
        puVar6[3] = 0x30;
        cVar1 = (char)iStack_38;
        puVar6[2] = cVar1 + '\b' + (char)iVar13;
        puVar6[6] = cVar1;
        puVar6[4] = cVar1 + '\x04';
        puVar6[5] = 6;
        iVar8 = FUN_ram_4ff45158(puVar6 + 7,auStack_34[0],iStack_38);
        puVar6 = (undefined1 *)(iVar8 + iVar7);
        puVar6[2] = 4;
        puVar6[1] = 0;
        puVar6[3] = (char)iVar13;
        *puVar6 = 5;
        iVar7 = FUN_ram_4ff45158(puVar6 + 4,param_6,iVar13);
        if ((uint *)(iVar7 + iVar13) == param_7 + iVar2) goto LAB_ram_4819436c;
        FUN_ram_48178af2(param_7,__n);
      }
    }
  }
  uVar4 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"ESP_RSA_SIGN_ALT","E (%lu) %s: Error in pkcs1_v15 encoding, returned %d\n",
                   uVar4,"ESP_RSA_SIGN_ALT",0xffffbf80);
  return 0xffffffff;
}


