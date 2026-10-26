/* Firmware entry: 0x4800f22a */

int * FUN_ram_4800f22a(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = (int *)(**(code **)(PTR_PTR_ram_4ff47e40 + 0xc))(4,1);
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_ram_480104b4(piVar2,*param_1,*(undefined1 *)(param_1 + 1),param_2,param_3);
    if (iVar3 == 0) {
      piVar1 = (int *)0x0;
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(piVar2);
    }
    else {
      *param_2 = *(undefined4 *)(iVar3 + 0xc);
      *piVar2 = iVar3;
      piVar1 = piVar2;
    }
    return piVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_hosted_api.c",0xad,"esp_hosted_add_channel","eh_chan");
}


