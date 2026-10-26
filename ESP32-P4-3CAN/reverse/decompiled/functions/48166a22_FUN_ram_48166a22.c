/* Firmware entry: 0x48166a22 */

undefined4 FUN_ram_48166a22(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_2 + 0x7c) == '\0') goto LAB_ram_48166a68;
  iVar9 = *(int *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 200) = 1;
  if (iVar9 == 0) {
    iVar8 = *(int *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0xcc) = 5;
    if (iVar8 != 0) goto LAB_ram_48166a50;
LAB_ram_48166a9c:
    iVar9 = *(int *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0xd0) = 5;
  }
  else {
    iVar8 = *(int *)(param_2 + 0x84);
    *(int *)(param_1 + 0xcc) = iVar9;
    if (iVar8 == 0) goto LAB_ram_48166a9c;
LAB_ram_48166a50:
    iVar9 = *(int *)(param_2 + 0x88);
    *(int *)(param_1 + 0xd0) = iVar8;
  }
  if (iVar9 == 0) {
    iVar9 = 3;
  }
  *(int *)(param_1 + 0xd4) = iVar9;
  FUN_ram_4819404c(param_3,param_1 + 200);
LAB_ram_48166a68:
  puVar10 = *(undefined1 **)(param_2 + 0x8c);
  if (puVar10 != (undefined1 *)0x0) {
    if (*(int *)(param_1 + 0xd8) == 0) {
      puVar6 = (undefined1 *)FUN_ram_4ff45080(1,6);
      *(undefined1 **)(param_1 + 0xd8) = puVar6;
      if (puVar6 == (undefined1 *)0x0) {
        uVar7 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: %s(%d): Memory exhausted\n",uVar7,
                         "HTTP_CLIENT","init_common_tcp_transport",0x2ed);
        return 0;
      }
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      uVar4 = puVar10[4];
      uVar5 = puVar10[5];
      *puVar6 = *puVar10;
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar6[4] = uVar4;
      puVar6[5] = uVar5;
    }
    FUN_ram_48194056(param_3);
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    FUN_ram_48193f2c(param_3);
  }
  return 1;
}


