cmd_/home/kernel-x/work/c-adv/ExtremeC/hello-module-kernel/Module.symvers := sed 's/\.ko$$/\.o/' /home/kernel-x/work/c-adv/ExtremeC/hello-module-kernel/modules.order | scripts/mod/modpost -m -a  -o /home/kernel-x/work/c-adv/ExtremeC/hello-module-kernel/Module.symvers -e -i Module.symvers   -T -
