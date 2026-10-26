/* Firmware entry: 0x480b5530 */

uint FUN_ram_480b5530(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined2 uVar5;
  int iVar6;
  size_t sVar7;
  undefined4 uVar8;
  char *__s;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint auStack_30 [3];
  ushort uStack_24;
  
  puVar2 = DAT_ram_4ff6dc98;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dc98 == (undefined4 *)0x0) {
    return 0;
  }
  __s = (char *)((int)DAT_ram_4ff6dc98 + 0xa3);
  local_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  puVar3 = &local_7c;
  FUN_ram_48132f46(&local_7c,0x10);
  pcVar4 = __s;
  do {
    uVar1 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    FUN_ram_4819ad74(pcVar4,3,&DAT_ram_481c3b70,uVar1);
    iVar6 = DAT_ram_4ff6dc9c;
    pcVar4 = pcVar4 + 2;
  } while (&uStack_6c != puVar3);
  *(undefined1 *)(DAT_ram_4ff6dc9c + 0xf5a) = 0x7b;
  iStack_4c = iVar6 + 0xf5a;
  *(undefined1 *)(iVar6 + 0xf5b) = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  uStack_48 = 0x1000;
  uStack_24 = 1;
  uStack_44 = 1;
  uStack_3c = 1;
  auStack_30[0] = 1;
  uStack_40 = 1;
  iVar6 = FUN_ram_4808c696(&iStack_4c,"version");
  if (iVar6 != 0) {
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    FUN_ram_4819ad74(&uStack_6c,0x20,&DAT_ram_481cb8cc);
    if ((((char)uStack_24 == '\0') || (uStack_48 < uStack_44)) || (uStack_48 - uStack_44 < 2)) {
      uStack_24 = uStack_24 & 0xff00;
    }
    else {
      *(undefined1 *)(uStack_44 + iStack_4c) = (undefined1)uStack_6c;
      *(undefined1 *)(iStack_4c + uStack_44 + 1) = 0;
      uStack_44 = uStack_44 + 1;
    }
  }
  pcVar4 = (char *)(DAT_ram_4ff6dcc8 + 0x63cf);
  sVar7 = strlen(pcVar4);
  FUN_ram_4808c96e(&iStack_4c,"device_id",pcVar4,sVar7);
  pcVar4 = (char *)(DAT_ram_4ff6dc9c + 0x234);
  sVar7 = strlen(pcVar4);
  FUN_ram_4808c96e(&iStack_4c,"boot_id",pcVar4,sVar7);
  sVar7 = strlen(__s);
  FUN_ram_4808c96e(&iStack_4c,"nonce",__s,sVar7);
  FUN_ram_4808c96e(&iStack_4c,"hardware_profile",&DAT_ram_481c3ddc,4);
  FUN_ram_4808c96e(&iStack_4c,"firmware_version","P1.6.4",6);
  uVar5 = FUN_ram_4802b91c(&DAT_ram_4ff5c850);
  FUN_ram_480b4e36(&iStack_4c,"chip_revision",uVar5);
  sVar7 = strlen("4d97f369e1a32f126b7121a66a70a53fca628dfa");
  FUN_ram_4808c96e(&iStack_4c,"source_commit","4d97f369e1a32f126b7121a66a70a53fca628dfa",sVar7);
  if (DAT_ram_4ff5c84f < '\0') {
    pcVar4 = (char *)&DAT_ram_4ff5c840;
LAB_ram_480b56d0:
    sVar7 = strlen(pcVar4);
  }
  else {
    sVar7 = 0;
    pcVar4 = DAT_ram_4ff5c840;
    if (DAT_ram_4ff5c840 != (char *)0x0) goto LAB_ram_480b56d0;
  }
  FUN_ram_4808c96e(&iStack_4c,"app_elf_sha256",pcVar4,sVar7);
  FUN_ram_4808c2dc(&iStack_4c,"boot_validated",DAT_ram_4ff6de6d);
  if ((((char)uStack_24 != '\0') && (uStack_40 - 1 < 0xb)) &&
     ((*(char *)((int)&uStack_34 + uStack_40 + 3) != '\0' &&
      (iVar6 = FUN_ram_4808c696(&iStack_4c,"management"), iVar6 != 0)))) {
    uStack_6c = CONCAT31(uStack_6c._1_3_,0x7b);
    iVar6 = FUN_ram_4808c90a(&iStack_4c,&uStack_6c,1);
    if (iVar6 != 0) {
      *(undefined1 *)((int)&uStack_3c + uStack_40) = 1;
      *(undefined1 *)((int)auStack_30 + uStack_40) = 1;
      uStack_40 = uStack_40 + 1;
      goto LAB_ram_480b5720;
    }
  }
  uStack_24 = uStack_24 & 0xff00;
LAB_ram_480b5720:
  FUN_ram_480b2068(&iStack_4c,"revision",*puVar2);
  if ((DAT_ram_4ff6dc98 == (undefined4 *)0x0) || (*(char *)((int)DAT_ram_4ff6dc98 + 0x95) != '\0'))
  {
    pcVar4 = "storage_error";
    uVar8 = 0xd;
  }
  else if (*(char *)(DAT_ram_4ff6dc98 + 0x25) == '\0') {
    if (*(char *)(DAT_ram_4ff6dc98 + 1) == '\0') {
      pcVar4 = "unlocked";
      uVar8 = 8;
    }
    else {
      pcVar4 = "pending_restart";
      uVar8 = 0xf;
    }
  }
  else if (*(char *)((int)DAT_ram_4ff6dc98 + 0xa2) == '\0') {
    pcVar4 = "locking";
    uVar8 = 7;
  }
  else {
    pcVar4 = "locked";
    uVar8 = 6;
  }
  FUN_ram_4808c96e(&iStack_4c,"state",pcVar4,uVar8);
  pcVar4 = (char *)puVar2[0x31];
  sVar7 = 0;
  if (pcVar4 != (char *)0x0) {
    sVar7 = strlen(pcVar4);
  }
  FUN_ram_4808c96e(&iStack_4c,"error",pcVar4,sVar7);
  if (((((char)uStack_24 == '\0') || (uStack_40 < 2)) ||
      (*(char *)((int)&uStack_34 + uStack_40 + 3) == '\0')) ||
     ((uStack_48 < uStack_44 || (uStack_48 - uStack_44 < 2)))) {
    uStack_24 = uStack_24 & 0xff00;
  }
  else {
    *(undefined1 *)(uStack_44 + iStack_4c) = 0x7d;
    *(undefined1 *)(iStack_4c + uStack_44 + 1) = 0;
    uStack_44 = uStack_44 + 1;
    uStack_40 = uStack_40 - 1;
  }
  FUN_ram_480b5280(&iStack_4c);
  if ((((char)uStack_24 != '\0') && (uStack_40 == 1)) &&
     (((auStack_30[0] & 0xff) != 0 && ((uStack_44 <= uStack_48 && (1 < uStack_48 - uStack_44)))))) {
    *(undefined1 *)(uStack_44 + iStack_4c) = 0x7d;
    *(undefined1 *)(iStack_4c + uStack_44 + 1) = 0;
    *(uint *)(DAT_ram_4ff6dc9c + 0x87b34) = uStack_44 + 1;
    return auStack_30[0] & 0xff;
  }
  return 0;
}


