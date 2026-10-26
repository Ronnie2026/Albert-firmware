/* Firmware entry: 0x480b24ba */

void FUN_ram_480b24ba(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  size_t sVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4808c696(param_1,&DAT_ram_481c4274);
  uVar2 = DAT_ram_481c3def;
  uVar1 = DAT_ram_481c3dee;
  uVar4 = DAT_ram_481c3ded;
  if ((iVar3 == 0) || ((char)param_1[10] == '\0')) {
LAB_ram_480b24ea:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar8 = param_1[2];
    if (((uint)param_1[1] < uVar8) || (param_1[1] - uVar8 < 5)) goto LAB_ram_480b24ea;
    puVar9 = (undefined1 *)(*param_1 + uVar8);
    *puVar9 = DAT_ram_481c3dec;
    puVar9[1] = uVar4;
    puVar9[2] = uVar1;
    puVar9[3] = uVar2;
    iVar3 = param_1[2];
    param_1[2] = iVar3 + 4;
    *(undefined1 *)(iVar3 + 4 + *param_1) = 0;
  }
  uVar5 = 0;
  if (DAT_ram_4ff6dc98 != (undefined4 *)0x0) {
    uVar5 = *DAT_ram_4ff6dc98;
  }
  FUN_ram_480b2068(param_1,"revision",uVar5);
  uVar4 = 1;
  if (DAT_ram_4ff6dc98 != (undefined4 *)0x0) {
    uVar4 = *(undefined1 *)(DAT_ram_4ff6dc98 + 0x25);
  }
  FUN_ram_4808c2dc(param_1,"locked",uVar4);
  if ((DAT_ram_4ff6dc98 == (undefined4 *)0x0) || (*(char *)(DAT_ram_4ff6dc98 + 1) == '\0')) {
    FUN_ram_4808c2dc(param_1,"pending",0);
    if (DAT_ram_4ff6dc98 != (undefined4 *)0x0) goto LAB_ram_480b2546;
LAB_ram_480b25f0:
    FUN_ram_4808c96e(param_1,"reason","admin",5);
    if (DAT_ram_4ff6dc98 == (undefined4 *)0x0) goto LAB_ram_480b260e;
LAB_ram_480b2574:
    if (*(char *)((int)DAT_ram_4ff6dc98 + 0x95) != '\0') goto LAB_ram_480b260e;
    if (*(char *)(DAT_ram_4ff6dc98 + 0x25) == '\0') {
      if (*(char *)(DAT_ram_4ff6dc98 + 1) != '\0') {
        FUN_ram_4808c96e(param_1,"state","pending_restart",0xf);
        goto joined_r0x480b262a;
      }
      pcVar6 = "unlocked";
      uVar5 = 8;
    }
    else if (*(char *)((int)DAT_ram_4ff6dc98 + 0xa2) == '\0') {
      pcVar6 = "locking";
      uVar5 = 7;
    }
    else {
      pcVar6 = "locked";
      uVar5 = 6;
    }
  }
  else {
    FUN_ram_4808c2dc(param_1,"pending",*(byte *)(DAT_ram_4ff6dc98 + 0x25) ^ 1);
    if (DAT_ram_4ff6dc98 == (undefined4 *)0x0) goto LAB_ram_480b25f0;
LAB_ram_480b2546:
    if (*(char *)((int)DAT_ram_4ff6dc98 + 6) == '\x01') {
      pcVar6 = "update";
      uVar5 = 6;
    }
    else {
      if (*(char *)((int)DAT_ram_4ff6dc98 + 6) == '\x02') goto LAB_ram_480b25f0;
      pcVar6 = "none";
      uVar5 = 4;
    }
    FUN_ram_4808c96e(param_1,"reason",pcVar6,uVar5);
    if (DAT_ram_4ff6dc98 != (undefined4 *)0x0) goto LAB_ram_480b2574;
LAB_ram_480b260e:
    pcVar6 = "storage_error";
    uVar5 = 0xd;
  }
  FUN_ram_4808c96e(param_1,"state",pcVar6,uVar5);
joined_r0x480b262a:
  if (DAT_ram_4ff6dc98 == (undefined4 *)0x0) {
    FUN_ram_4808c96e(param_1,"error","management_memory",0x11);
  }
  else {
    pcVar6 = (char *)DAT_ram_4ff6dc98[0x31];
    sVar7 = 0;
    if (pcVar6 != (char *)0x0) {
      sVar7 = strlen(pcVar6);
    }
    FUN_ram_4808c96e(param_1,"error",pcVar6,sVar7);
  }
  if (DAT_ram_4ff6dc98 == (undefined4 *)0x0) {
    pcVar6 = "";
    sVar7 = 0;
  }
  else {
    pcVar6 = (char *)((int)DAT_ram_4ff6dc98 + 7);
    sVar7 = strlen(pcVar6);
  }
  FUN_ram_4808c96e(param_1,"targetVersion",pcVar6,sVar7);
  if (DAT_ram_4ff6dc98 == (undefined4 *)0x0) {
    pcVar6 = "";
    sVar7 = 0;
  }
  else {
    pcVar6 = (char *)((int)DAT_ram_4ff6dc98 + 0x27);
    sVar7 = strlen(pcVar6);
  }
  FUN_ram_4808c96e(param_1,"targetCommit",pcVar6,sVar7);
  return;
}


