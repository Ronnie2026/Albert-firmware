/* Firmware entry: 0x4818cb72 */

undefined4 FUN_ram_4818cb72(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0xfffffff0;
  }
  if (param_2 == 0) {
    return 0xfffffff0;
  }
  *param_1 = param_2;
  if (param_1[0x12] != 0) {
    FUN_ram_4814351a();
  }
  iVar2 = FUN_ram_4814354e();
  param_1[0x12] = iVar2;
  if ((iVar2 == 0) || (param_3 == 0)) {
    FUN_ram_4819ac1a("dhcps_start(): could not obtain pcb");
    return 0xfffffff0;
  }
  uVar9 = param_1[7];
  param_1[2] = param_3;
  param_1[1] = -1;
  uVar3 = __bswapsi2(uVar9);
  if ((uVar3 - 1 | uVar3) != 0xffffffff) {
    FUN_ram_4819ac1a("dhcps: Illegal subnet mask.");
    return 0xfffffff0;
  }
  uVar4 = __bswapsi2(param_3);
  uVar8 = ~uVar3 | uVar4;
  uVar3 = uVar3 & uVar4;
  if ((uVar4 == uVar8) || (uVar4 == uVar3)) {
    FUN_ram_4819ac1a("dhcps: ip address and subnet mask do not match.");
    return 0xfffffff0;
  }
  if ((char)param_1[10] == '\0') {
LAB_ram_4818cbf8:
    if (uVar8 - uVar4 < uVar4 - uVar3) {
LAB_ram_4818cc04:
      uVar8 = uVar4;
      uVar4 = uVar3;
    }
  }
  else {
    uVar5 = param_1[0xb];
    uVar6 = __bswapsi2(uVar5);
    uVar10 = param_1[0xc];
    uVar7 = __bswapsi2(uVar10);
    if (((uVar4 < uVar6) || (uVar7 < uVar4)) &&
       (((param_3 ^ uVar5 | param_3 ^ uVar10) & uVar9) == 0)) {
      if ((uVar7 + 1) - uVar6 < 0x65) goto LAB_ram_4818cc6c;
      goto LAB_ram_4818cbf8;
    }
    if (uVar8 - uVar4 < uVar4 - uVar3) goto LAB_ram_4818cc04;
  }
  iVar1 = uVar8 - 1;
  if (100 < uVar8 - (uVar4 + 1)) {
    iVar1 = uVar4 + 100;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *(undefined1 *)((int)param_1 + 0x33) = 0;
  uVar5 = __bswapsi2();
  param_1[0xb] = uVar5;
  iVar1 = __bswapsi2(iVar1);
  param_1[0xc] = iVar1;
  *(undefined1 *)(param_1 + 10) = 1;
LAB_ram_4818cc6c:
  param_1[6] = uVar5;
  FUN_ram_48143346(iVar2,*param_1);
  FUN_ram_48142c4a(param_1[0x12],param_2 + 4,0x43);
  FUN_ram_48143512(param_1[0x12],&LAB_ram_4818c026,param_1);
  param_1[0x13] = 1;
  FUN_ram_48142636(1000,&DAT_ram_4818beee,param_1);
  return 0;
}


